
undefined8 main(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  void **local_38;
  uint local_30;
  uint local_2c;
  undefined4 local_28;
  undefined4 local_24;
  void *local_20;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  
  megaInit();
  local_10 = 1;
  local_14 = 1;
  _global_argv = param_2;
  _global_argc = param_1;
  _global_envp = param_3;
  _2_main_1_opaque_list_1 = malloc(0x18);
  *(void **)((long)_2_main_1_opaque_list_1 + 8) = _2_main_1_opaque_list_1;
  *(void **)_2_main_1_opaque_list_1 = _2_main_1_opaque_list_1;
  local_c = 0;
  local_20 = _2_main_1_opaque_list_1;
  while (local_c < 4) {
    local_38 = (void **)malloc(0x18);
    *(uint *)(local_38 + 2) = local_c * (((uint)_1_entropy & 0xfffffff5) - (~(uint)_1_entropy & 10))
    ;
    local_38[1] = *(void **)((long)_2_main_1_opaque_list_1 + 8);
    *local_38 = _2_main_1_opaque_list_1;
    *(void ***)*(long ***)((long)_2_main_1_opaque_list_1 + 8) = local_38;
    *(void ***)((long)_2_main_1_opaque_list_1 + 8) = local_38;
    local_c = local_c + 1;
  }
  _2_main_1_opaque_ptr_1 = *(long *)((long)_2_main_1_opaque_list_1 + 8);
  _2_main_1_opaque_ptr_2 = *(undefined8 *)(_2_main_1_opaque_ptr_1 + 8);
  local_24 = 1;
  local_28 = 1;
  uVar1 = (uint)((long)_1_entropy >> 0x3f);
  (**(code **)(_3__functionPtrArray +
              (long)(int)(*(uint *)(_2_main__opaque_array +
                                   (ulong)(((((uint)_1_entropy | 7) + uVar1 ^ uVar1) % 10) * 3) * 4)
                          % _2_main__opaque_array._20_4_ - 3) * 8))();
  uVar1 = (uint)((long)_1_entropy >> 0x3f);
  local_30 = (**(code **)(_3__functionPtrArray +
                         (long)(int)(*(uint *)(_2_main__opaque_array +
                                              (ulong)(((((uint)_1_entropy | 10) + uVar1 ^ uVar1) %
                                                      10) * 3) * 4) % _2_main__opaque_array._20_4_ -
                                    1) * 8))();
  *(void ****)
   (_3__functionPtrArray +
   (((_1_entropy * 2 | 0x12) + (_1_entropy ^ 0xfffffffffffffff6) + 1 & ~_1_alwaysZero) *
    (~((_1_entropy * 2 | 0x12) + (_1_entropy ^ 0xfffffffffffffff6) + 1) & _1_alwaysZero) +
    ((_1_entropy * 2 | 0x12) + (_1_entropy ^ 0xfffffffffffffff6) + 1 & _1_alwaysZero) *
    (_1_alwaysZero | (_1_entropy * 2 | 0x12) + (_1_entropy ^ 0xfffffffffffffff6) + 1) + 1) * 8) =
       &local_38;
  local_2c = local_30;
  (**(code **)(_3__functionPtrArray +
              (((_1_entropy ^ 1) & ~_1_alwaysZero) *
               ((_1_entropy ^ 0xfffffffffffffffe) & _1_alwaysZero) +
               ((_1_entropy ^ 1) & _1_alwaysZero) * (_1_alwaysZero | _1_entropy ^ 1) + 3) * 8))
            ((ulong)local_30,~_1_alwaysZero,
             *(code **)(_3__functionPtrArray +
                       (((_1_entropy ^ 1) & ~_1_alwaysZero) *
                        ((_1_entropy ^ 0xfffffffffffffffe) & _1_alwaysZero) +
                        ((_1_entropy ^ 1) & _1_alwaysZero) * (_1_alwaysZero | _1_entropy ^ 1) + 3) *
                       8));
  return 0;
}

