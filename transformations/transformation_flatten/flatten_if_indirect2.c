
/* WARNING (jumptable): Heritage AFTER dead removal. Example location: s0xffffffffffffffc8 :
   0x001011ab */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void main(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  megaInit();
  _global_argv = param_2;
  _global_argc = param_1;
  _global_envp = param_3;
                    /* WARNING: Could not recover jumptable at 0x001011d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)&LAB_00101201)();
  return;
}

