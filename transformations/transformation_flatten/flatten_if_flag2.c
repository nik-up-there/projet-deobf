long _1_main_flag_func_0(int param_1,int param_2,long param_3,long param_4){
  bool bVar1;

  bVar1 = (((uint)SBORROW4(param_1,param_2) ^
            (uint)(((ulong)(param_1 - param_2 < 0) * 0x80 | (ulong)(param_1 == param_2) * 0x40) >> 7)
           ) & 1) == 0;
  return (ulong)!bVar1 * param_4 + (ulong)bVar1 * param_3;
}

undefined8 main(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong local_18;
  uint local_c;
  
  megaInit();
  local_18 = 2;
  _global_argv = param_2;
  _global_argc = param_1;
  _global_envp = param_3;
  while (local_18 != 3) {
    if (local_18 < 4) {
      if (local_18 == 2) {
        local_c = 10;
        local_18 = 0;
      }
      else {
        if (local_18 < 3) {
          if (local_18 == 0) {
            local_18 = _1_main_flag_func_0((ulong)local_c,10,1,3);
          }
          else {
            if (local_18 == 1) {
              printf("True");
              local_18 = 3;
            }
          }
        }
      }
    }
  }
  return 0;
}

