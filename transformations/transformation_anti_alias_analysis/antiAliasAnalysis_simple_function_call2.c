
undefined8 main(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  void **ppvVar2;
  int local_c;
  
  megaInit();
  _global_argv = param_2;
  _global_argc = param_1;
  _global_envp = param_3;
  _2_main_1_opaque_list_1 = malloc(0x18);
  *(void **)((long)_2_main_1_opaque_list_1 + 8) = _2_main_1_opaque_list_1;
  *(void **)_2_main_1_opaque_list_1 = _2_main_1_opaque_list_1;
  local_c = 0;
  while (local_c < 4) {
    ppvVar2 = (void **)malloc(0x18);
    *(uint *)(ppvVar2 + 2) = (((uint)_1_entropy & 0xfffffff5) - (~(uint)_1_entropy & 10)) * local_c;
    ppvVar2[1] = *(void **)((long)_2_main_1_opaque_list_1 + 8);
    *ppvVar2 = _2_main_1_opaque_list_1;
    *(void ***)*(long ***)((long)_2_main_1_opaque_list_1 + 8) = ppvVar2;
    *(void ***)((long)_2_main_1_opaque_list_1 + 8) = ppvVar2;
    local_c = local_c + 1;
  }
  _2_main_1_opaque_ptr_1 = *(long *)((long)_2_main_1_opaque_list_1 + 8);
  _2_main_1_opaque_ptr_2 = *(undefined8 *)(_2_main_1_opaque_ptr_1 + 8);
  uVar1 = (uint)((long)_1_entropy >> 0x3f);
  (**(code **)(_3__functionPtrArray +
              (long)(int)(*(uint *)(_2_main__opaque_array +
                                   (ulong)(((((uint)_1_entropy | 7) + uVar1 ^ uVar1) % 10) * 3) * 4)
                          % _2_main__opaque_array._20_4_ - 3) * 8))();
  return 0;
}

