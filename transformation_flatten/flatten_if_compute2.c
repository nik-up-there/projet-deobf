
undefined8 main(undefined4 param_1,undefined8 param_2,undefined8 param_3){
  byte bVar1;
  int local_c;
  
  megaInit();
  bVar1 = 2;
  _global_argv = param_2;
  _global_argc = param_1;
  _global_envp = param_3;
  while (bVar1 != 3) {
    if (bVar1 < 4) {
      if (bVar1 == 2) {
        local_c = 10;
        bVar1 = 0;
      }
      else {
        if (bVar1 < 3) {
          if (bVar1 == 0) {
            bVar1 = (9 >= local_c) * '\x03' + (9 < local_c);
          }
          else {
            if (bVar1 == 1) {
              printf("True");
              bVar1 = 3;
            }
          }
        }
      }
    }
  }
  return 0;
}

