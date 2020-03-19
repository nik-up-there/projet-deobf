undefined8 main(int argc,long param_2,undefined8 param_3)
{
  ulong uVar1;
  ulong ulong_4_array [4];
  int local_arg_c;

  ulong_4_array[2] = param_3;
  ulong_4_array[3] = param_2;
  local_arg_c = argc;

  o___64();
  /*
  // TODO: Que représente l'objet 0___102?
  *(undefined8 *)(o___102) = 0;
  *(undefined8 *)(o___102 + 8) = 0;
  */

  if (local_arg_c != 2) {
    printf("Call this program with %i arguments\n",1);
    /* WARNING: Subroutine does not return */
    exit(-1);
  }

  // TODO: stroul?
  uVar1 = strtoul(*(char **)(ulong_4_array[3] + 8),(char **)0x0,10);
  ulong_4_array[1] = uVar1;

  o___97(ulong_4_array + 1,ulong_4_array);
  /*
  undefined local_268 [248];
  code *UNRECOVERED_JUMPTABLE;
  undefined8 local_138;
  undefined8 local_18;
  undefined8 local_10;

  local_18 = param_2;
  local_10 = param_1;
  memcpy(local_268,&PTR_LAB_00401a00,0x128);
  local_138 = 0x1f;

  // TODO: C'est une tranformation flatten avec des call indirects par goto ou indirect
  // WARNING: Could not recover jumptable at 0x00400cb7. Too many branches
  // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)();
  */

  printf("%lu\n",ulong_4_array[0]);
  return 0;
}