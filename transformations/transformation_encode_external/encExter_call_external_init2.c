void tigress_init(void)

{
  _1_tigress_init__externalFunctionPtrArray._0_8_ = dlsym(0,"gettimeofday");
  _1_tigress_init__externalFunctionPtrArray._8_8_ = dlsym(0,"getpid");
  return;
}

undefined8 main(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_1c;
  undefined4 local_18;
  uint local_14;
  uint local_10;
  undefined4 local_c;
  
  megaInit();
  local_c = 1;
  _global_argv = param_2;
  _global_argc = param_1;
  _global_envp = param_3;
  tigress_init();
  local_14 = (*_1_tigress_init__externalFunctionPtrArray._8_8_)();
  local_10 = local_14;
  printf("pid: %i\n",(ulong)local_14);
  local_1c = (*_1_tigress_init__externalFunctionPtrArray._0_8_)
                       (&local_38,0,_1_tigress_init__externalFunctionPtrArray._0_8_);
  local_18 = local_1c;
  printf("time of day: %ld.%06ld\n",local_38,local_30);
  return 0;
}

