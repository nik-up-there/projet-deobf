undefined8 main(int argc,long param_2,undefined8 param_3)
{
  ulong uVar1;
  ulong ulong_4_array [4];
  int local_arg_c;

  ulong_4_array[2] = param_3; // "SHELL/bin/bash"
  ulong_4_array[3] = param_2; // "/media/../1.1"
  local_arg_c = argc;

  o___64();
  /*
  *(undefined8 *)(o___102) = 0; // Mets 0 à l'adresse 0x602070
  *(undefined8 *)(o___102 + 8) = 0; Mets 0 à l'adresse 0x602078
   *
  */

  o___103 = argc; // Mets 0x2 à l'adresse 0x602068
  o___135 = param_2; // Mets "/meda/../1.1" à l'adresse 0x602068
  o___132 = param_3; // Mets "/SHELL/bin/bash" à l'adresse 0x602060

  if (local_arg_c != 2) {
    printf("Call this program with %i arguments\n",1);
    /* WARNING: Subroutine does not return */
    exit(-1);
  }

  // TODO: stroul?
  /*
  # Prépare l'appel à stroul
  004006d4 31 c0           XOR        EAX,EAX  # mets RAX à 0
  004006d6 89 c6           MOV        param_2,EAX # Mets ESI à 0, où était param_2
  004006d8 ba 0a 00        MOV        param_3,0xa # Mets EDX à 0xa (12 ou \n), où était param_3
  00 00
  004006dd 48 8b 4d f0     MOV        RCX,qword ptr [RBP + local_18] # Mets RCX à "/media/..", ce qu'il y avait dans local_30[2] çad "/meda/.."
  004006e1 8b 45 d4        MOV        EAX,dword ptr [RBP + local_34] # Mets dans EAX à 0, ce qu'il y avait dans local34 (variable qui sert à rentrer dans le while) avec la valeur 0
  004006e4 83 c0 01        ADD        EAX,0x1 # Mets eax à 1
  004006e7 48 63 f8        MOVSXD     argc,EAX # Mets RDI à 1, où était argc
  004006ea 48 8b 3c f9     MOV        argc,qword ptr [RCX + argc*0x8] # Mets RDI l'argument donné au pgm, ce qu'il y avait à l'adresse RCX+8 avec RCX l'adresse où était "/media/.." = 0x7fffffffe652

  à addr("/media")+8, il y a l'adresse qui pointe sur la chaine de caractère "1" ou "2" qui est l'argument qu'on donne au pgm !!!
  Cette adresse correspond à addr(local_30[3]) + 8 utilisé dans strtoul.

  Avant appel état des registres:
  RAX: 1
  RCX: pointeur sur "/media/.."
  RDI: pointeur sur l'argument donné au prgm (char*)
  RSI: 0

  Après:
  RAX: argument donné au programme (long)
  RCX: 0
  RDI: pointeur sur chaine vide "" (char*)
  RSI: 0
  et des effets de bords sur les autres registres

  sur RDX, R8, R9, R10, R11
  RDX: 0xa (\n) => 0xfffffffffffffff3 avec arg = 13 0xfffffffffffffff4 avec arg = 12, 0xfffffffffffffff3 avec 15
  => CCL: RDX a la valeur -(arg donné)

  Remarque: en runnant 2 fois le programme avec les mêmes arg, on a les mêmes états.
  Remarque: en runnant 2 fois le pgm avec des arg différents, on a les mêmes états sauf le RAX de retour (normal) et RDX
  */

  uVar1 = strtoul(*(char **)(ulong_4_array[3] + 8),(char **)0x0,10);
  /*
  arg1 = *(char **)(ulong_4_array[3] + 8) => argument donné au programme
  arg2 = (char **)0x0, => adresse 0x0 qui pointe vers un string? (cannot access) // ou juste "0"?
  arg3 = 10
  CCL : Renvoie d'après le gdb la valeur donné en argument au programme. (à voir si ya des effets de bords?)
  Et la stocke dans uVar1 en +local_40
   */

  /*
  004006f3 48 89 45 c8     MOV        qword ptr [RBP + local_40],RAX # Mets le résulat dans uvar1 à -0x40
  004006f7 48 8b 45 c8     MOV        RAX,qword ptr [RBP + local_40] # Résulat déjà dans RAX
  004006fb 48 63 4d d4     MOVSXD     RCX,dword ptr [RBP + local_34] # Mets RCX à 0, local_34 rentre dans le while
  004006ff 48 89 44        MOV        qword ptr [RBP + RCX*0x8 + -0x20],RAX # Mets le résultat dans $rbp-0x20 /!\ Dans Ghidra cette adresse est local_30[2] est dans GDB local30[1]
  cd e0
  00400704 8b 55 d4        MOV        param_3,dword ptr [RBP + local_34] # Mets dans EDX le local_34 qui vaut 0
  00400707 83 c2 01        ADD        param_3,0x1 # Incrémente edx de 1 pour passer à 1
  0040070a 89 55 d4        MOV        dword ptr [RBP + local_34],param_3 # Incrémente local_34 de 1 à 1 pour sortir du while
  0040070d e9 b8 ff        JMP        LAB_004006ca # On arrive là!!
  ff ff
   * */

  ulong_4_array[1] = uVar1; // Met le résultat précédent "arg donné" de array[2] à array[1]
  /*

  004006ff 48 89 44        MOV        qword ptr [RBP + RCX*0x8 + -0x20],RAX
  cd e0
  00400712 48 8d 75 d8     LEA        param_2=>local_30,[RBP + -0x28]
  00400716 48 8d 7d e0     LEA        argc=>local_28,[RBP + -0x20]

  Remarque: Ensuite Ghidra compense la différence -0x20 en LEA dessus.
  ghidra mets l'adresse -0x28 dans -0x30 donc l'adresse -0x30 (local[0]) contient local[1]
   ghidra mets l'adresse -0x20 dans -0x28 donc l'adresse -0x28 (local[0]) contient local[2] soit l'arg du pgm

  gdb mets ça dans local30[0](-Ox28) => RSI et local30[1](-0x20) => RDI

  */

  o___97(ulong_4_array + 1,ulong_4_array); // avec les valeurs o___97("arg donne au pgm", 0)
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

  /*
   Après le o___97
   On a donné donc local30[0] dans RSI comme argument qui était une adresse qui pointait sur 0.
   Après la fonction, cette adresse pointe sur le résultat.

   */

  printf("%lu\n",ulong_4_array[0]);
  return 0;
}