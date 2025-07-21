#include <generated/autoconf.h>
#include <generated/asm-offsets.h>
#include <linux/rh_kabi.h>
int main(void)
{
	RH_KABI_ASSERT_EQ_CONST(0, __PT_ARGS); /* offsetof(struct pt_regs, args) */
	RH_KABI_ASSERT_EQ_CONST(176, __PT_FLAGS); /* offsetof(struct pt_regs, flags) */
	RH_KABI_ASSERT_EQ_CONST(24, __PT_GPRS); /* offsetof(struct pt_regs, gprs) */
	RH_KABI_ASSERT_EQ_CONST(160, __PT_INT_CODE); /* offsetof(struct pt_regs, int_code) */
	RH_KABI_ASSERT_EQ_CONST(164, __PT_INT_PARM); /* offsetof(struct pt_regs, int_parm) */
	RH_KABI_ASSERT_EQ_CONST(168, __PT_INT_PARM_LONG); /* offsetof(struct pt_regs, int_parm_long) */
	RH_KABI_ASSERT_EQ_CONST(152, __PT_ORIG_GPR2); /* offsetof(struct pt_regs, orig_gpr2) */
	RH_KABI_ASSERT_EQ_CONST(8, __PT_PSW); /* offsetof(struct pt_regs, psw) */
	RH_KABI_ASSERT_EQ_CONST(184, __PT_SIZE); /* sizeof(struct pt_regs) */
	RH_KABI_ASSERT_EQ_CONST(1984, __TASK_pid); /* offsetof(struct task_struct, pid) */
	RH_KABI_ASSERT_EQ_CONST(16, __TASK_stack); /* offsetof(struct task_struct, stack) */
	RH_KABI_ASSERT_EQ_CONST(3256, __TASK_thread); /* offsetof(struct task_struct, thread) */
	RH_KABI_ASSERT_EQ_CONST(560, __THREAD_FPU_fpc); /* offsetof(struct thread_struct, fpu.fpc) */
	RH_KABI_ASSERT_EQ_CONST(568, __THREAD_FPU_regs); /* offsetof(struct thread_struct, fpu.regs) */
	RH_KABI_ASSERT_EQ_CONST(64, __THREAD_ksp); /* offsetof(struct thread_struct, ksp) */
	RH_KABI_ASSERT_EQ_CONST(216, __THREAD_last_break); /* offsetof(struct thread_struct, last_break) */
	RH_KABI_ASSERT_EQ_CONST(184, __THREAD_per_address); /* offsetof(struct thread_struct, per_event.address) */
	RH_KABI_ASSERT_EQ_CONST(176, __THREAD_per_cause); /* offsetof(struct thread_struct, per_event.cause) */
	RH_KABI_ASSERT_EQ_CONST(192, __THREAD_per_paid); /* offsetof(struct thread_struct, per_event.paid) */
	RH_KABI_ASSERT_EQ_CONST(112, __THREAD_sysc_table); /* offsetof(struct thread_struct, sys_call_table) */
	RH_KABI_ASSERT_EQ_CONST(272, __THREAD_trap_tdb); /* offsetof(struct thread_struct, trap_tdb) */
	RH_KABI_ASSERT_EQ_CONST(0, __TI_flags); /* offsetof(struct task_struct, thread_info.flags) */
	return 0;
}
