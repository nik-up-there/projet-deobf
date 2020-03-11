
undefined8 main(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  uint local_20;
  uint local_1c;
  code *local_18;
  undefined4 local_c;
  
  megaInit();
  local_c = 1;
  _global_argv = param_2;
  _global_argc = param_1;
  _global_envp = param_3;
  _1_main__externalFunctionPtrArray._0_8_ = (code *)dlsym(0,"gettimeofday");
  local_18 = _1_main__externalFunctionPtrArray._0_8_;
  _1_main__externalFunctionPtrArray._8_8_ = (code *)dlsym(0,"getpid");
  local_18 = _1_main__externalFunctionPtrArray._8_8_;
  local_20 = (*_1_main__externalFunctionPtrArray._8_8_)();
  local_1c = local_20;
  printf("pid: %i\n",(ulong)local_20);
  local_28 = (*_1_main__externalFunctionPtrArray._0_8_)
                       (&local_38,0,_1_main__externalFunctionPtrArray._0_8_);
  local_24 = local_28;
  printf("time of day: %ld.%06ld\n",local_38,local_30);
  return 0;
}

