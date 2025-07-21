#include <generated/autoconf.h>
#include <generated/asm-offsets.h>
#include <linux/rh_kabi.h>
int main(void)
{
	RH_KABI_ASSERT_EQ_CONST(24, BUG_ENTRY_SIZE); /* sizeof(struct bug_entry) */
	RH_KABI_ASSERT_EQ_CONST(416, _CCR); /* STACK_FRAME_OVERHEAD + offsetof(struct pt_regs, ccr) */
	RH_KABI_ASSERT_EQ_CONST(392, _CTR); /* STACK_FRAME_OVERHEAD + offsetof(struct pt_regs, ctr) */
	RH_KABI_ASSERT_EQ_CONST(440, _DAR); /* STACK_FRAME_OVERHEAD + offsetof(struct pt_regs, dar) */
	RH_KABI_ASSERT_EQ_CONST(448, _DSISR); /* STACK_FRAME_OVERHEAD + offsetof(struct pt_regs, dsisr) */
	RH_KABI_ASSERT_EQ_CONST(512, FPSTATE_FPSCR); /* offsetof(struct thread_fp_state, fpscr) */
	RH_KABI_ASSERT_EQ_CONST(112, GPR0); /* STACK_FRAME_OVERHEAD + offsetof(struct pt_regs, gpr[0]) */
	RH_KABI_ASSERT_EQ_CONST(192, GPR10); /* STACK_FRAME_OVERHEAD + offsetof(struct pt_regs, gpr[10]) */
	RH_KABI_ASSERT_EQ_CONST(200, GPR11); /* STACK_FRAME_OVERHEAD + offsetof(struct pt_regs, gpr[11]) */
	RH_KABI_ASSERT_EQ_CONST(120, GPR1); /* STACK_FRAME_OVERHEAD + offsetof(struct pt_regs, gpr[1]) */
	RH_KABI_ASSERT_EQ_CONST(208, GPR12); /* STACK_FRAME_OVERHEAD + offsetof(struct pt_regs, gpr[12]) */
	RH_KABI_ASSERT_EQ_CONST(216, GPR13); /* STACK_FRAME_OVERHEAD + offsetof(struct pt_regs, gpr[13]) */
	RH_KABI_ASSERT_EQ_CONST(128, GPR2); /* STACK_FRAME_OVERHEAD + offsetof(struct pt_regs, gpr[2]) */
	RH_KABI_ASSERT_EQ_CONST(136, GPR3); /* STACK_FRAME_OVERHEAD + offsetof(struct pt_regs, gpr[3]) */
	RH_KABI_ASSERT_EQ_CONST(144, GPR4); /* STACK_FRAME_OVERHEAD + offsetof(struct pt_regs, gpr[4]) */
	RH_KABI_ASSERT_EQ_CONST(152, GPR5); /* STACK_FRAME_OVERHEAD + offsetof(struct pt_regs, gpr[5]) */
	RH_KABI_ASSERT_EQ_CONST(160, GPR6); /* STACK_FRAME_OVERHEAD + offsetof(struct pt_regs, gpr[6]) */
	RH_KABI_ASSERT_EQ_CONST(168, GPR7); /* STACK_FRAME_OVERHEAD + offsetof(struct pt_regs, gpr[7]) */
	RH_KABI_ASSERT_EQ_CONST(176, GPR8); /* STACK_FRAME_OVERHEAD + offsetof(struct pt_regs, gpr[8]) */
	RH_KABI_ASSERT_EQ_CONST(184, GPR9); /* STACK_FRAME_OVERHEAD + offsetof(struct pt_regs, gpr[9]) */
	RH_KABI_ASSERT_EQ_CONST(0, KSP); /* offsetof(struct thread_struct, ksp) */
	RH_KABI_ASSERT_EQ_CONST(8, KSP_VSID); /* offsetof(struct thread_struct, ksp_vsid) */
	RH_KABI_ASSERT_EQ_CONST(400, _LINK); /* STACK_FRAME_OVERHEAD + offsetof(struct pt_regs, link) */
	RH_KABI_ASSERT_EQ_CONST(1488, MM); /* offsetof(struct task_struct, mm) */
	RH_KABI_ASSERT_EQ_CONST(920, MMCONTEXTID); /* offsetof(struct mm_struct, context.id) */
	RH_KABI_ASSERT_EQ_CONST(376, _MSR); /* STACK_FRAME_OVERHEAD + offsetof(struct pt_regs, msr) */
	RH_KABI_ASSERT_EQ_CONST(368, _NIP); /* STACK_FRAME_OVERHEAD + offsetof(struct pt_regs, nip) */
	RH_KABI_ASSERT_EQ_CONST(384, ORIG_GPR3); /* STACK_FRAME_OVERHEAD + offsetof(struct pt_regs, orig_gpr3) */
	RH_KABI_ASSERT_EQ_CONST(3328, PACA_CANARY); /* offsetof(struct paca_struct, canary) */
	RH_KABI_ASSERT_EQ_CONST(464, _PPR); /* STACK_FRAME_OVERHEAD + offsetof(struct pt_regs, ppr) */
	RH_KABI_ASSERT_EQ_CONST(1240, PT_CKPT_REGS); /* offsetof(struct thread_struct, ckpt_regs) */
	RH_KABI_ASSERT_EQ_CONST(16, PT_REGS); /* offsetof(struct thread_struct, regs) */
	RH_KABI_ASSERT_EQ_CONST(456, RESULT); /* STACK_FRAME_OVERHEAD + offsetof(struct pt_regs, result) */
	RH_KABI_ASSERT_EQ_CONST(424, SOFTE); /* STACK_FRAME_OVERHEAD + offsetof(struct pt_regs, softe) */
	RH_KABI_ASSERT_EQ_CONST(480, SWITCH_FRAME_SIZE); /* STACK_FRAME_OVERHEAD + sizeof(struct pt_regs) */
	RH_KABI_ASSERT_EQ_CONST(1768, TASK_CANARY); /* offsetof(struct task_struct, stack_canary) */
	RH_KABI_ASSERT_EQ_CONST(3168, THREAD); /* offsetof(struct task_struct, thread) */
	RH_KABI_ASSERT_EQ_CONST(1632, THREAD_CKFPSTATE); /* offsetof(struct thread_struct, ckfp_state.fpr) */
	RH_KABI_ASSERT_EQ_CONST(2688, THREAD_CKVRSAVE); /* offsetof(struct thread_struct, ckvrsave) */
	RH_KABI_ASSERT_EQ_CONST(2160, THREAD_CKVRSTATE); /* offsetof(struct thread_struct, ckvr_state.vr) */
	RH_KABI_ASSERT_EQ_CONST(568, THREAD_FPEXC_MODE); /* offsetof(struct thread_struct, fpexc_mode) */
	RH_KABI_ASSERT_EQ_CONST(560, THREAD_FPSAVEAREA); /* offsetof(struct thread_struct, fp_save_area) */
	RH_KABI_ASSERT_EQ_CONST(32, THREAD_FPSTATE); /* offsetof(struct thread_struct, fp_state.fpr) */
	RH_KABI_ASSERT_EQ_CONST(648, THREAD_LOAD_FP); /* offsetof(struct thread_struct, load_fp) */
	RH_KABI_ASSERT_EQ_CONST(649, THREAD_LOAD_VEC); /* offsetof(struct thread_struct, load_vec) */
	RH_KABI_ASSERT_EQ_CONST(1624, THREAD_TM_DSCR); /* offsetof(struct thread_struct, tm_dscr) */
	RH_KABI_ASSERT_EQ_CONST(1616, THREAD_TM_PPR); /* offsetof(struct thread_struct, tm_ppr) */
	RH_KABI_ASSERT_EQ_CONST(1608, THREAD_TM_TAR); /* offsetof(struct thread_struct, tm_tar) */
	RH_KABI_ASSERT_EQ_CONST(1224, THREAD_TM_TEXASR); /* offsetof(struct thread_struct, tm_texasr) */
	RH_KABI_ASSERT_EQ_CONST(1216, THREAD_TM_TFHAR); /* offsetof(struct thread_struct, tm_tfhar) */
	RH_KABI_ASSERT_EQ_CONST(1232, THREAD_TM_TFIAR); /* offsetof(struct thread_struct, tm_tfiar) */
	RH_KABI_ASSERT_EQ_CONST(1200, THREAD_USED_VR); /* offsetof(struct thread_struct, used_vr) */
	RH_KABI_ASSERT_EQ_CONST(1204, THREAD_USED_VSR); /* offsetof(struct thread_struct, used_vsr) */
	RH_KABI_ASSERT_EQ_CONST(1192, THREAD_VRSAVE); /* offsetof(struct thread_struct, vrsave) */
	RH_KABI_ASSERT_EQ_CONST(1184, THREAD_VRSAVEAREA); /* offsetof(struct thread_struct, vr_save_area) */
	RH_KABI_ASSERT_EQ_CONST(656, THREAD_VRSTATE); /* offsetof(struct thread_struct, vr_state.vr) */
	RH_KABI_ASSERT_EQ_CONST(8, TI_CPU); /* offsetof(struct thread_info, cpu) */
	RH_KABI_ASSERT_EQ_CONST(128, TI_FLAGS); /* offsetof(struct thread_info, flags) */
	RH_KABI_ASSERT_EQ_CONST(24, TI_livepatch_sp); /* offsetof(struct thread_info, livepatch_sp) */
	RH_KABI_ASSERT_EQ_CONST(16, TI_LOCAL_FLAGS); /* offsetof(struct thread_info, local_flags) */
	RH_KABI_ASSERT_EQ_CONST(12, TI_PREEMPT); /* offsetof(struct thread_info, preempt_count) */
	RH_KABI_ASSERT_EQ_CONST(0, TI_TASK); /* offsetof(struct thread_info, task) */
	RH_KABI_ASSERT_EQ_CONST(496, TM_FRAME_SIZE); /* STACK_FRAME_OVERHEAD + sizeof(struct pt_regs) + 16 */
	RH_KABI_ASSERT_EQ_CONST(432, _TRAP); /* STACK_FRAME_OVERHEAD + offsetof(struct pt_regs, trap) */
	RH_KABI_ASSERT_EQ_CONST(4, TSPC32_TV_NSEC); /* offsetof(struct compat_timespec, tv_nsec) */
	RH_KABI_ASSERT_EQ_CONST(0, TSPC32_TV_SEC); /* offsetof(struct compat_timespec, tv_sec) */
	RH_KABI_ASSERT_EQ_CONST(8, TSPC64_TV_NSEC); /* offsetof(struct timespec, tv_nsec) */
	RH_KABI_ASSERT_EQ_CONST(0, TSPC64_TV_SEC); /* offsetof(struct timespec, tv_sec) */
	RH_KABI_ASSERT_EQ_CONST(0, TVAL64_TV_SEC); /* offsetof(struct timeval, tv_sec) */
	RH_KABI_ASSERT_EQ_CONST(8, TVAL64_TV_USEC); /* offsetof(struct timeval, tv_usec) */
	RH_KABI_ASSERT_EQ_CONST(512, VRSTATE_VSCR); /* offsetof(struct thread_vr_state, vscr) */
	RH_KABI_ASSERT_EQ_CONST(408, _XER); /* STACK_FRAME_OVERHEAD + offsetof(struct pt_regs, xer) */
	return 0;
}
