from collections import defaultdict
import re
import subprocess

import requests

kernels = defaultdict(list)
r = requests.get('https://vault.almalinux.org')
for ver in re.findall(r'>([0-9]+\.[0-9]+)/?<', r.text):
    major = int(ver.split('.')[0])
    base = f'https://vault.almalinux.org/{ver}/BaseOS/Source/Packages/'
    r = requests.get(base)
    for rpm in re.findall(r'>(kernel-.*rpm)<', r.text):
        kernels[major].append(base + rpm)


def sorter(kernel):
    major, minor = kernel.split('/')[3].split('.')
    major, minor = int(major), int(minor)
    result = [major, minor]
    kernel = kernel.split('/')[-1]
    components = re.split(r'[\.\-]', kernel)
    for c in components:
        if c.isnumeric():
            result.append(int(c))
    return result


def call(cmd, *args, **kwargs):
    print(cmd)
    subprocess.check_call(cmd, *args, **kwargs)


for major in sorted(kernels):
    kernels[major].sort(key=sorter)

    prev = None
    for url in kernels[major]:
        print(url)
        minor = url.split('/')[3]
        tag = url.split('/kernel-')[1].split('.src.rpm')[0]
        cmd = ['git', 'show-ref', '--tags', '--quiet', tag]
        p1 = subprocess.call(cmd)
        if p1 != 0:
            if prev is None:
                cmd = ['git', 'checkout', '--orphan', f'{major}']
                call(cmd)
            else:
                cmd = ['git', 'checkout', prev]
                call(cmd)
            if minor != prev:
                cmd = ['git', 'checkout', '-b', minor]
                call(cmd)
            cmd = ['git', 'rm', '-f', '-r', '.']
            call(cmd, stdout=subprocess.DEVNULL, stderr=subprocess.DEVNULL)
            cmd = ['git', 'clean', '-fdx']
            call(cmd)
            cmd = ['mkdir', 'almalinux']
            call(cmd)
            cmd = f'curl -Ls {url} | rpm2cpio - | cpio -idmD almalinux'
            cmd = ['bash', '-c', cmd]
            call(cmd)
            cmd = 'tar --exclude=.git --strip-components=1 -xJf almalinux/linux-*-*.el*.tar*'
            cmd = ['bash', '-c', cmd]
            call(cmd)
            cmd = 'rm almalinux/*.tar*'
            cmd = ['bash', '-c', cmd]
            call(cmd)
            cmd = ['git', 'add', '.']
            call(cmd)
            cmd = ['date', '--iso-8601=seconds', '-r', 'almalinux/kernel.spec']
            date = subprocess.check_output(cmd, text=True).strip()
            cmd = ['env', 'GIT_COMMITTER_DATE=' + date, 'git', 'commit', '--allow-empty', '-m', url, '--date=' + date]
            call(cmd)
            cmd = ['git', 'tag', tag]
            call(cmd)
        else:
            cmd = ['git', 'show-ref', '--quiet', minor]
            p2 = subprocess.call(cmd)
            if p2 != 0:
                cmd = ['git', 'checkout', prev]
                call(cmd)
                cmd = ['git', 'checkout', '-b', minor]
                call(cmd)
        prev = minor
    cmd = ['git', 'checkout', prev]
    call(cmd)
    cmd = ['git', 'branch', '-f', f'{major}']
    call(cmd)
