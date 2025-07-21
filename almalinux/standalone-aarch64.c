#include <generated/autoconf.h>
#include <generated/asm-offsets.h>
#include <linux/rh_kabi.h>
int main(void)
{
	RH_KABI_ASSERT_EQ_CONST(728, MM_CONTEXT_ID); /* offsetof(struct mm_struct, context.id.counter) */
	RH_KABI_ASSERT_EQ_CONST(320, S_FRAME_SIZE); /* sizeof(struct pt_regs) */
	RH_KABI_ASSERT_EQ_CONST(240, S_LR); /* offsetof(struct pt_regs, regs[30]) */
	RH_KABI_ASSERT_EQ_CONST(288, S_ORIG_ADDR_LIMIT); /* offsetof(struct pt_regs, orig_addr_limit) */
	RH_KABI_ASSERT_EQ_CONST(256, S_PC); /* offsetof(struct pt_regs, pc) */
	RH_KABI_ASSERT_EQ_CONST(296, S_PMR_SAVE); /* offsetof(struct pt_regs, pmr_save) */
	RH_KABI_ASSERT_EQ_CONST(264, S_PSTATE); /* offsetof(struct pt_regs, pstate) */
	RH_KABI_ASSERT_EQ_CONST(248, S_SP); /* offsetof(struct pt_regs, sp) */
	RH_KABI_ASSERT_EQ_CONST(304, S_STACKFRAME); /* offsetof(struct pt_regs, stackframe) */
	RH_KABI_ASSERT_EQ_CONST(280, S_SYSCALLNO); /* offsetof(struct pt_regs, syscallno) */
	RH_KABI_ASSERT_EQ_CONST(0, S_X0); /* offsetof(struct pt_regs, regs[0]) */
	RH_KABI_ASSERT_EQ_CONST(80, S_X10); /* offsetof(struct pt_regs, regs[10]) */
	RH_KABI_ASSERT_EQ_CONST(96, S_X12); /* offsetof(struct pt_regs, regs[12]) */
	RH_KABI_ASSERT_EQ_CONST(112, S_X14); /* offsetof(struct pt_regs, regs[14]) */
	RH_KABI_ASSERT_EQ_CONST(128, S_X16); /* offsetof(struct pt_regs, regs[16]) */
	RH_KABI_ASSERT_EQ_CONST(144, S_X18); /* offsetof(struct pt_regs, regs[18]) */
	RH_KABI_ASSERT_EQ_CONST(160, S_X20); /* offsetof(struct pt_regs, regs[20]) */
	RH_KABI_ASSERT_EQ_CONST(16, S_X2); /* offsetof(struct pt_regs, regs[2]) */
	RH_KABI_ASSERT_EQ_CONST(176, S_X22); /* offsetof(struct pt_regs, regs[22]) */
	RH_KABI_ASSERT_EQ_CONST(192, S_X24); /* offsetof(struct pt_regs, regs[24]) */
	RH_KABI_ASSERT_EQ_CONST(208, S_X26); /* offsetof(struct pt_regs, regs[26]) */
	RH_KABI_ASSERT_EQ_CONST(224, S_X28); /* offsetof(struct pt_regs, regs[28]) */
	RH_KABI_ASSERT_EQ_CONST(32, S_X4); /* offsetof(struct pt_regs, regs[4]) */
	RH_KABI_ASSERT_EQ_CONST(48, S_X6); /* offsetof(struct pt_regs, regs[6]) */
	RH_KABI_ASSERT_EQ_CONST(64, S_X8); /* offsetof(struct pt_regs, regs[8]) */
	RH_KABI_ASSERT_EQ_CONST(3344, THREAD_CPU_CONTEXT); /* offsetof(struct task_struct, thread.cpu_context) */
	RH_KABI_ASSERT_EQ_CONST(1688, TSK_ACTIVE_MM); /* offsetof(struct task_struct, active_mm) */
	RH_KABI_ASSERT_EQ_CONST(32, TSK_STACK); /* offsetof(struct task_struct, stack) */
	RH_KABI_ASSERT_EQ_CONST(1864, TSK_STACK_CANARY); /* offsetof(struct task_struct, stack_canary) */
	RH_KABI_ASSERT_EQ_CONST(8, TSK_TI_ADDR_LIMIT); /* offsetof(struct task_struct, thread_info.addr_limit) */
	RH_KABI_ASSERT_EQ_CONST(0, TSK_TI_FLAGS); /* offsetof(struct task_struct, thread_info.flags) */
	RH_KABI_ASSERT_EQ_CONST(16, TSK_TI_PREEMPT); /* offsetof(struct task_struct, thread_info.preempt_count) */
	RH_KABI_ASSERT_EQ_CONST(80, VMA_VM_FLAGS); /* offsetof(struct vm_area_struct, vm_flags) */
	RH_KABI_ASSERT_EQ_CONST(64, VMA_VM_MM); /* offsetof(struct vm_area_struct, vm_mm) */
	return 0;
}
