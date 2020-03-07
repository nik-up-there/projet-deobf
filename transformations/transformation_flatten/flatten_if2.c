
undefined8 main(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong local_18;
  int local_c;
  
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
            if (local_c < 10) {
              local_18 = 3;
            }
            else {
              local_18 = 1;
            }
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

