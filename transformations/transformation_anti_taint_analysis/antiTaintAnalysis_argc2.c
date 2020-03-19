
undefined8 main(int param_1,long param_2,undefined8 param_3)

{
  size_t sVar1;
  int local_ac [4];
  int local_9c;
  undefined4 local_98;
  uint local_94;
  undefined *local_90;
  undefined4 local_84;
  undefined8 *local_80;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  int local_68;
  int local_64;
  undefined *local_60;
  int local_54;
  int local_50;
  int local_4c;
  int *local_48;
  undefined4 *local_40;
  char *local_38;
  undefined8 *local_30;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  uint *local_18;
  int *local_10;
  
  local_ac[0] = param_1;
  megaInit();
  _global_argc = local_ac[0];
  local_6c = 1;
  local_70 = 1;
  local_74 = 1;
  _global_argv = param_2;
  _global_envp = param_3;
  local_80 = (undefined8 *)malloc((ulong)(uint)(local_ac[0] << 3));
  local_28 = 0;
  local_30 = local_80;
  while (local_28 < local_ac[0]) {
    sVar1 = strlen(*(char **)(param_2 + (long)local_28 * 8));
    local_98 = (undefined4)sVar1;
    local_40 = &local_98;
    local_48 = &local_9c;
    local_4c = 0;
    local_84 = local_98;
    while (local_4c < 4) {
      local_50 = 0;
      local_54 = 0;
      while (local_54 < (int)(uint)*(byte *)local_40) {
        local_50 = local_50 + 1;
        local_54 = local_54 + 1;
      }
      *(char *)local_48 = (char)local_50;
      local_40 = (undefined4 *)((long)local_40 + 1);
      local_48 = (int *)((long)local_48 + 1);
      local_4c = local_4c + 1;
    }
    local_90 = (undefined *)malloc((ulong)(local_9c + 1));
    local_38 = *(char **)(param_2 + (long)local_28 * 8);
    local_60 = local_90;
    while (*local_38 != '\0') {
      local_64 = 0;
      local_68 = 0;
      while (local_68 < *local_38) {
        local_64 = local_64 + 1;
        local_68 = local_68 + 1;
      }
      *local_60 = (char)local_64;
      local_38 = local_38 + 1;
      local_60 = local_60 + 1;
    }
    *local_60 = 0;
    *(undefined **)local_30 = local_90;
    local_30 = local_30 + 1;
    local_28 = local_28 + 1;
  }
  local_10 = local_ac;
  local_18 = &local_94;
  local_1c = 0;
  while (local_1c < 4) {
    local_20 = 0;
    local_24 = 0;
    while (local_24 < (int)(uint)*(byte *)local_10) {
      local_20 = local_20 + 1;
      local_24 = local_24 + 1;
    }
    *(char *)local_18 = (char)local_20;
    local_10 = (int *)((long)local_10 + 1);
    local_18 = (uint *)((long)local_18 + 1);
    local_1c = local_1c + 1;
  }
  printf("%d\n",(ulong)local_94);
  return 0;
}

