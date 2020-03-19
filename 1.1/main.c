
undefined8 main(int param_1,long param_2,undefined8 param_3)

{
  ulong uVar1;
  int local_44;
  int local_34;
  ulong local_30 [4];
  int local_10;
  undefined4 local_c;
  
  local_c = 0;
  local_30[2] = param_3;
  local_30[3] = param_2;
  local_10 = param_1;
  o___88();
  o___103 = local_10;
  o___135 = local_30[3];
  o___132 = local_30[2];
  o___151();
  if (local_10 != 2) {
    printf("Call this program with %i arguments\n",1);
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  local_34 = 0;
  while (local_34 < 1) {
    uVar1 = strtoul(*(char **)(local_30[3] + (long)(local_34 + 1) * 8),(char **)0x0,10);
    local_30[(long)local_34 + 1] = uVar1;
    local_34 = local_34 + 1;
  }
  o___97(local_30 + 1,local_30);
  local_44 = 0;
  while (local_44 < 1) {
    printf("%lu\n",local_30[local_44]);
    local_44 = local_44 + 1;
  }
  return 0;
}

