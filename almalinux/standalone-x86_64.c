#include <generated/autoconf.h>
#include <generated/asm-offsets.h>
#include <linux/rh_kabi.h>
int main(void)
{
	RH_KABI_ASSERT_EQ_CONST(64, crypto_tfm_ctx_offset); /* offsetof(struct crypto_tfm, __crt_ctx) */
	RH_KABI_ASSERT_EQ_CONST(24, PARAVIRT_PATCH_pv_cpu_ops); /* offsetof(struct paravirt_patch_template, pv_cpu_ops) */
	RH_KABI_ASSERT_EQ_CONST(296, PARAVIRT_PATCH_pv_irq_ops); /* offsetof(struct paravirt_patch_template, pv_irq_ops) */
	RH_KABI_ASSERT_EQ_CONST(32, pt_regs_bp); /* offsetof(struct pt_regs, bp) */
	RH_KABI_ASSERT_EQ_CONST(40, pt_regs_bx); /* offsetof(struct pt_regs, bx) */
	RH_KABI_ASSERT_EQ_CONST(88, pt_regs_cx); /* offsetof(struct pt_regs, cx) */
	RH_KABI_ASSERT_EQ_CONST(112, pt_regs_di); /* offsetof(struct pt_regs, di) */
	RH_KABI_ASSERT_EQ_CONST(96, pt_regs_dx); /* offsetof(struct pt_regs, dx) */
	RH_KABI_ASSERT_EQ_CONST(144, pt_regs_flags); /* offsetof(struct pt_regs, flags) */
	RH_KABI_ASSERT_EQ_CONST(56, pt_regs_r10); /* offsetof(struct pt_regs, r10) */
	RH_KABI_ASSERT_EQ_CONST(48, pt_regs_r11); /* offsetof(struct pt_regs, r11) */
	RH_KABI_ASSERT_EQ_CONST(24, pt_regs_r12); /* offsetof(struct pt_regs, r12) */
	RH_KABI_ASSERT_EQ_CONST(16, pt_regs_r13); /* offsetof(struct pt_regs, r13) */
	RH_KABI_ASSERT_EQ_CONST(8, pt_regs_r14); /* offsetof(struct pt_regs, r14) */
	RH_KABI_ASSERT_EQ_CONST(0, pt_regs_r15); /* offsetof(struct pt_regs, r15) */
	RH_KABI_ASSERT_EQ_CONST(72, pt_regs_r8); /* offsetof(struct pt_regs, r8) */
	RH_KABI_ASSERT_EQ_CONST(64, pt_regs_r9); /* offsetof(struct pt_regs, r9) */
	RH_KABI_ASSERT_EQ_CONST(104, pt_regs_si); /* offsetof(struct pt_regs, si) */
	RH_KABI_ASSERT_EQ_CONST(168, PTREGS_SIZE); /* sizeof(struct pt_regs) */
	RH_KABI_ASSERT_EQ_CONST(152, pt_regs_sp); /* offsetof(struct pt_regs, sp) */
	RH_KABI_ASSERT_EQ_CONST(240, PV_CPU_iret); /* offsetof(struct pv_cpu_ops, iret) */
	RH_KABI_ASSERT_EQ_CONST(248, PV_CPU_swapgs); /* offsetof(struct pv_cpu_ops, swapgs) */
	RH_KABI_ASSERT_EQ_CONST(232, PV_CPU_usergs_sysret64); /* offsetof(struct pv_cpu_ops, usergs_sysret64) */
	RH_KABI_ASSERT_EQ_CONST(16, PV_IRQ_irq_disable); /* offsetof(struct pv_irq_ops, irq_disable) */
	RH_KABI_ASSERT_EQ_CONST(24, PV_IRQ_irq_enable); /* offsetof(struct pv_irq_ops, irq_enable) */
	RH_KABI_ASSERT_EQ_CONST(0, PV_MMU_read_cr2); /* offsetof(struct pv_mmu_ops, read_cr2) */
	RH_KABI_ASSERT_EQ_CONST(5144, TASK_addr_limit); /* offsetof(struct task_struct, thread.addr_limit) */
	RH_KABI_ASSERT_EQ_CONST(2312, TASK_stack_canary); /* offsetof(struct task_struct, stack_canary) */
	RH_KABI_ASSERT_EQ_CONST(5016, TASK_threadsp); /* offsetof(struct task_struct, thread.sp) */
	RH_KABI_ASSERT_EQ_CONST(0, TASK_TI_flags); /* offsetof(struct task_struct, thread_info.flags) */
	return 0;
}
