
/* WARNING: Removing unreachable block (ram,0x00401204) */
/* WARNING: Switch with 1 destination removed at 0x00400cb7 */
/* WARNING: Could not reconcile some variable overlaps */

void o___97(ulong *param_1,ulong *param_2)

{
  undefined uVar1;
  int iVar2;
  uint uVar3;
  long **pplVar4;
  ulong uVar5;
  undefined local_268 [304];
  undefined8 local_138;
  ulong *puStack296;
  undefined8 *puStack288;
  long *plStack272;
  undefined8 *puStack264;
  ulong *puStack256;
  undefined8 *puStack248;
  long **pplStack240;
  long **pplStack232;
  long **pplStack224;
  long **pplStack216;
  uint uStack192;
  uint uStack188;
  undefined4 uStack168;
  uint uStack164;
  uint uStack160;
  undefined uStack155;
  long **applStack72 [4];
  ulong uStack40;
  ulong uStack32;
  ulong *local_18;
  ulong *local_10;

  local_18 = param_2;
  local_10 = param_1;
  memcpy(local_268,&PTR_LAB_00401a00,0x128);
  local_138 = 0x1f;

  // ----------------------- INITIALISATION AVEC DES VALEURS BRUTES --------------------
  ARRAY[0] = (long **)0x0; // $rbp-0x40
  ARRAY[1] = (long **)0x0; // $rbp-0x38
  ARRAY[2] = (long **)0x0; // $rbp-0x30
  ARRAY[3] = (long **)0x0; // $rbp-0x28


  uStack40 = (*local_10 ^ 0x18d5b5b7) + 0x76d5b0c6000; // $rbp-0x20
  uStack32 = *local_10 - 0x53b4d34 | uStack40 | 0x968a408; // $rbp-0x18
  // 4008a3
  o___102._0_8_ = *local_10 | 0x2ae0a098b67fadab; // 0x602070, 102 à 0x602070 aussi?
  o___102._8_8_ = (*local_10 | 0xd5e5554) - 0x43e340d3; // Donc à 0x602078

  // ----------------------- AFFECTATION DES VARIABLES --------------------
  //STACK 216
  pplStack216 = (long **)malloc(0x18); // adresse 0x603260
  *(long ***)(pplStack216 + 2) = pplStack216; // 0x603260+2*0x8 -> 0x603260
  pplStack216[1] = (long *)0x0; // 0x603260+0x8 -> 0x0
  ARRAY[0] = pplStack216; // INSTANCIATION ARRAY[0] = (long**) 0x603260
  ARRAY[2] = pplStack216; // INSTANCIATION ARRAY[1] = (long**) 0x603260

  //STACK 224
  pplStack224 = (long **)malloc(0x18); // adresse 0x603280
  pplStack224[1] = (long *)(*local_10 + o___102._0_8_ + 0x2b64d785); // 0x603280+0x8 -> (long*) VALUE CONNUE
  *pplStack224 = *ARRAY[0]; // 0x603280 -> *0x603260
  *(long ***)(pplStack224 + 2) = ARRAY[0]; // 0x603280+2*0x8 -> 0x603260
  *(long ***)(*ARRAY[0] + 2) = pplStack224; // *0x603260+2*0x8 -> 0x603280
  *(long ***)ARRAY[0] = pplStack224; // 0x603260 -> 0x603280
  ARRAY[0] = (long **)*ARRAY[0]; // INSTANCIATTION ARRAY[0] = (long**) 0x603280

  //STACK 232
  pplStack232 = (long **)malloc(0x18); // adresse 0x6032a0
  *(long ***)pplStack232 = pplStack232; // 0x6032a0 -> 0x6032a0
  *(long ***)(pplStack232 + 2) = pplStack232; // 0x6032a0+2*0x8 -> 0x6032a0
  pplStack232[1] = (long *)0x0; // 0x6032a0+0x8 -> 0x0
  ARRAY[1] = pplStack232; // INSTANCIATTION ARRAY[1] = (long**) 0x6032a0
  ARRAY[3] = pplStack232; // INSTANCIATTION ARRAY[3] = (long**) 0x6032a0

  //STACK 240
  pplStack240 = (long **)malloc(0x18); // adress 0x6032c0?
  pplStack240[1] = (long *)(*local_10 - 0x19d5f99a); // 0x6032c0+0x8 -> VALUE CONNUE
  *pplStack240 = *ARRAY[1]; // 0x6032c0 -> *0x6032a0 (=0x6032a0? l86)
  *(long ***)(pplStack240 + 2) = ARRAY[1]; // 0x6032c0+2*0x8 -> 0x6032a0
  *(long ***)(*ARRAY[1] + 2) = pplStack240;
  *(long ***)ARRAY[1] = pplStack240; // 0x6032a0 -> 0x6032c0
  ARRAY[1] = (long **)*ARRAY[1]; // INSTANCIATION ARRAY[1] = (long**) 0x6032c0

  // STACK 248
  puStack248 = (undefined8 *)malloc(0x18); // adress 0x6032e0?
  *(undefined8 **)(puStack248 + 2) = puStack248; // 0x6032e0+2*0x8 -> 0x6032e0
  *(undefined8 **)(puStack248 + 1) = puStack248; // 0x6032e0+0x8 -> 0x6032e0
  o___107._0_8_ = puStack248; // INSTANCIATION o___107._0_8_ = 0x6032e0
  *puStack248 = 0; // 0x6032e0 -> 0

  //STACK 256
  puStack256 = (ulong *)malloc(0x18); // adresse 0x603300
  *puStack256 = *local_10 + o___102._0_8_ >> ((char)uStack32 + 0x26U & 0xf | 1) |
                *local_10 + o___102._0_8_ << (0x40 - ((char)uStack32 + 0x26U & 0xf | 1) & 0x3f); // 0x603300 -> VALEUR CONNUE
  puStack256[2] = o___107._0_8_[2]; // *(0x603330+2*0x8) = *(0x6032e0+2*0x8)
  *(ulong **)(puStack256 + 1) = o___107._0_8_; // 0x603300+0x8 -> 0x6032e0
  *(ulong **)(o___107._0_8_[2] + 8) = puStack256; // *(0x6032e0+2*0x8)+8 -> 0x603300
  *(ulong **)(o___107._0_8_ + 2) = puStack256; // 0x6032e0+2*0x8 -> 0x603300
  o___107._0_8_ = (ulong *)o___107._0_8_[2]; // INSTANCIATION o___107._0_8_ = *(0x6032e0+2*0x8) = 0x603300

  //STACK 264
  puStack264 = (undefined8 *)malloc(0x18); // adresse 0x603320
  *(undefined8 **)(puStack264 + 2) = puStack264; // 0x603320+2*0x8 -> 0x603320
  *(undefined8 **)(puStack264 + 1) = puStack264; // 0x603320+0x8 -> 0x603320
  o___107._8_8_ = puStack264; // INSTANCIATION o___107._8_8_ = 0x603320
  *puStack264 = 0; // 0x603320 -> 0x0

  //STACK 272
  plStack272 = (long *)malloc(0x18); // adresse 0x603340
  *plStack272 = (*local_10 + 0x2297cfce) * (o___102._0_8_ + 0xb99206a); // 0x603340 -> VALEUR CONNUE
  plStack272[2] = o___107._8_8_[2]; // *(0x603340+2*0x8) = *(0x603320+2*0x8)
  *(ulong **)(plStack272 + 1) = o___107._8_8_; // 0x603340+0x8 -> 0x603320
  *(long **)(o___107._8_8_[2] + 8) = plStack272; // *(0x603320+2*0x8)+8 -> 0x603340
  *(long **)(o___107._8_8_ + 2) = plStack272; // 0x603320+2*0x8 -> 0x603340
  o___107._8_8_ = (ulong *)o___107._8_8_[2]; // INSTANCIATION o___107._8_8_ = *(0x603320+2*0x8) (= 0x603340 l118)

  /*
  uStack40 = (*local_10 ^ 0x18d5b5b7) + 0x76d5b0c6000; // $rbp-0x20
  Ustack32 = *local_10 - 0x53b4d34 | uStack40 | 0x968a408; // $rbp-0x18

  L'emplacement de 10708 ) 0x602090
  o___107._0_8_ = 0x603300 l103
  *o___107._0_8_ = *local_10 + o___102._0_8_ >> ((char)uStack32 + 0x26U & 0xf | 1) |
                   *local_10 + o___102._0_8_ << (0x40 - ((char)uStack32 + 0x26U & 0xf | 1) & 0x3f)
                 = (l99)

  L'emplacement 10788 à 0x602098
  o___107._8_8_ = 0x603340 (L'adresse est bonne sur gdb)
  *o___107._8_8_ = *0x603340 = (*local_10 + 0x2297cfce) * (o___102._0_8_ + 0xb99206a)
                             = (arg donné + 0x2297cfce) * ((arg donné | 0x2ae0a098b67fadab) + 0xb99206a) (le résultat pas exactement ça)
                             = valeur à Ox400cc4 dans $rax
  */

  /* --------------------------------- PARTIE CALCUL ------------------------------- */
  /* WARNING: Switch is manually overridden */

  // COMP_1 à 0x400cd0 OK
  if ((*o___107._8_8_ >> 1 & 1) != 0) { // Avant dernier bit à 1?
    // 0x400fe1
    **(long **)(o___107 + ((long)(int)*o___107._8_8_ & 1U) * 8) = uStack32 + *(long *)(o___102 + ((long)(int)uStack32 & 1U) * 8);
    ARRAY[(long)(int)*o___107._0_8_ & 1][1] = (long *)(&uStack40)[(long)(int)o___102._0_8_ & 1];
  }
  // 4010e2

  // *o___107._0_8_ = valeur à 0x4010ea dans rax = *0x603300 (gdb)?
  // COMP_2 à 0x4010f9 OK
  if ((*o___107._0_8_ >> 3 & 1) != 0) {

    // uStack32 = valeur à 0x4015ce dans rax
    // COMP_21 à 0x4015da
    if ((uStack32 >> 1 & 1) == 0) {
      // 0x40132ef
      uStack160 = 0;
      uStack164 = 0;
      while (uStack164 < 0x10) {
        uVar5 = (long)(int)*o___107._8_8_ & 1;
        (&uStack40)[uVar5] =
                ((&uStack40)[(long)(int)*o___107._8_8_ & 1] & 0xf) << 2 | (&uStack40)[uVar5];
        uStack168 = *(undefined4 *)(&uStack40 + ((ulong)uStack164 & 1));
        *(undefined4 *)(&uStack40 + ((ulong)uStack164 & 1)) =
                *(undefined4 *)((long)&uStack40 + ((ulong)uStack164 & 1) * 8 + 4);
        *(undefined4 *)((long)&uStack40 + ((ulong)uStack164 & 1) * 8 + 4) = uStack168;
        ARRAY[1] = (long **)*ARRAY[1];
        uStack160 = uStack160 + 1 & 1;
        uStack164 = uStack164 + 1;
      }
    } else {
      // *o___107._8_8_ = valeur à 0x40105c dans rax et n'a pas changé depuis l'initialisation
      // COMP_211 à 0x401073
      if ((*o___107._8_8_ >> 1 & 1) == 0) {
        // 0x400e55
        *(long **)(ARRAY + ((long)(int)*o___107._8_8_ & 1)) =
                *ARRAY[(long)(int)*o___107._8_8_ & 1];
        ARRAY[(long)(int)*o___107._0_8_ & 1][1] =
                (long *)(&uStack40)[(long)(int)*o___107._8_8_ & 1];
        uVar1 = *(undefined *)(*(long *)(o___107 + ((long)(int)*o___107._8_8_ & 1U) * 8) + 7);
        *(undefined *)(*(long *)(o___107 + ((long)(int)*o___107._8_8_ & 1U) * 8) + 7) =
                *(undefined *)(*(long *)(o___107 + ((long)(int)*o___107._8_8_ & 1U) * 8) + 6);
        *(undefined *)(*(long *)(o___107 + ((long)(int)*o___107._8_8_ & 1U) * 8) + 6) = uVar1;
        uStack155 = *(undefined *)(*(long *)(o___107 + ((long)(int)*o___107._8_8_ & 1U) * 8) + 6);
        *(undefined *)(*(long *)(o___107 + ((long)(int)*o___107._8_8_ & 1U) * 8) + 6) =
                *(undefined *)(*(long *)(o___107 + ((long)(int)*o___107._8_8_ & 1U) * 8) + 1);
        *(undefined *)(*(long *)(o___107 + ((long)(int)*o___107._8_8_ & 1U) * 8) + 1) = uStack155;
      } else {
        // 0x40122a rien ici car simplifié met des adresses à 0 non réutilisées
      }
    }

    // uVar3 = valeur à 0x401078 dans rax,
    // uStack32 = *local_10 - 0x53b4d34 | uStack40 | 0x968a408; // $rbp-0x18 (l50)
    // 0x401078
    uVar3 = (uint)uStack32;
    // Valeur à 102 la même que 102._0_8 ou ._8_8?
    // COMP_22 0x4010ab
    if ((*(int *)(o___102 + (ulong)(uVar3 & 1) * 8) +
         *(int *)(&uStack40 + ((uint)o___102._8_8_ & 1)) & 3U) == 0) {
      // 0x4007ca
      uStack188 = 0;
      uStack192 = 0;
      while (uStack192 < 8) {
        ARRAY[uStack188][1] =
                (long *)(*(long *)(o___102 + (ulong)uStack188 * 8) - (&uStack40)[uStack188]);
        *(long **)(ARRAY + ((long)(int)o___102._0_8_ & 1)) =
                *ARRAY[(long)(int)o___102._0_8_ & 1];
        *(long **)(ARRAY + uStack188) = *ARRAY[uStack188];
        uStack188 = uStack188 + 1 & 1;
        uStack192 = uStack192 + 2;
      }
    } else {

      // COMP_221 à 0x4010c8
      if ((*(int *)(o___102 + (ulong)(uVar3 & 1) * 8) +
           *(int *)(&uStack40 + ((uint)o___102._8_8_ & 1)) & 3U) == 1) {

        // 40129e
        // COMP_2211 à 0x40121a
        if (
            ((*o___107._0_8_ & 1) != 0)
            &&
            ((uStack32 & 1) == 0)) {
          // 400d04
          *(long **)(ARRAY + ((long)(int)ARRAY[0][1] & 1)) =
                  *ARRAY[(long)(int)ARRAY[0][1] & 1];
          uVar5 = (long)(int)ARRAY[0][1] & 1;
          (&uStack40)[uVar5] =
                  ((&uStack40)[(long)(int)uStack32 & 1] & 0x1f) << 4 | (&uStack40)[uVar5];
          puStack288 = (undefined8 *)malloc(0x18);
          iVar2 = (int)uStack40;
          *puStack288 = (&uStack40)[(long)iVar2 & 1];
          puStack288[2] = *(undefined8 *)(*(long *)(o___107 + ((long)iVar2 & 1U) * 8) + 0x10);
          puStack288[1] = *(undefined8 *)(o___107 + ((long)iVar2 & 1U) * 8);
          *(undefined8 **)(*(long *)(*(long *)(o___107 + ((long)iVar2 & 1U) * 8) + 0x10) + 8) =
                  puStack288;
          *(undefined8 **)(*(long *)(o___107 + ((long)iVar2 & 1U) * 8) +
          0x10) = puStack288;
        }
        // Valeur de o___107._8_8_ à 4011d3 dans rax
        // COMP_2212 à 4011e2
        if ((*o___107._8_8_ >> 1 & 1) == 0) {
          // 4015ea
          ARRAY[1][1] = (long *)(&uStack40)[(long)(int)ARRAY[0][1] & 1];
          o___107._8_8_ = (ulong *)o___107._8_8_[2];
          puStack296 = (ulong *)malloc(0x18);
          *puStack296 = uStack32 | (&uStack40)[(long)(int)o___102._0_8_ & 1];
          puStack296[2] = o___107._8_8_[2];
          *(ulong **)(puStack296 + 1) = o___107._8_8_;
          *(ulong **)(o___107._8_8_[2] + 8) = puStack296;
          *(ulong **)(o___107._8_8_ + 2) = puStack296;
          iVar2 = (int)o___102._0_8_;
          *(long **)(ARRAY + ((long)iVar2 & 1)) = *ARRAY[(long)iVar2 & 1];
          (&uStack40)[(long)(int)o___102._8_8_ & 1] =
                  *(ulong *)(o___102 + ((long)iVar2 & 1U) * 8) >>
                                                               ((byte)(*(ulong *)(o___102 + ((long)(int)ARRAY[0][1] & 1U) * 8) >> 1) & 7 | 1);
          *o___107._8_8_ =
                  (&uStack40)[(long)(int)ARRAY[0][1] & 1] *
                  (&uStack40)[(long)(int)ARRAY[1][1] & 1];
        }

      } else {
        // 0x4007ff
        // COMP_2213 à 0x400812
        if ((*o___107._0_8_ & 1) == 0) {
          // 401778
          *(long **)(ARRAY + ((long)(int)uVar3 & 1)) = *ARRAY[(long)(int)uVar3 & 1];
          uStack32 = (ulong)(byte)uStack32;
        } else {
          // Valeur de o___102._8_8_ à 400ce8 dans rax
          // COMP_22131 à 400cf4
          if ((o___102._8_8_ >> 2 & 1) == 0) {
            // 401243
            o___102._8_8_ = ((&uStack40)[(long)(int)uStack40 & 1] & 7) << 2 | o___102._8_8_;
            ARRAY[(long)(int)o___102._0_8_ & 1][1] =
                    (long *)(&uStack40)[(long)(int)ARRAY[1][1] & 1];
            pplVar4 = (long **)malloc(0x18);
            pplVar4[1] = (long *)(*(long *)(o___102 + ((long)(int)ARRAY[0][1] & 1U) * 8) -
                                  o___102._0_8_);
            *pplVar4 = *ARRAY[0];
            *(long ***)(pplVar4 + 2) = ARRAY[0];
            *(long ***)(*ARRAY[0] + 2) = pplVar4;
            *(long ***)ARRAY[0] = pplVar4;
          }
        }
      }
    }
  }

  // Fin à 0x401348
  // Objets à connaître:
  // o___102._0_8_,
  // o___102._8_8_,
  // *o___107._0_8_,
  // *o___107._8_8_,
  // ARRAY[0][1],
  // ARRAY[1][1]
  // uStack40 = valeur initialisée = 0x401357 dans rdc
  // uStack32 = valeur initialisée = 0x401357 dans rsi (mais des cas où elle est modifiée)
  *local_18 = uStack40 >> ((byte)(uStack32 >> 4) & 7 | 1) &

              (long)ARRAY[0][1] + (long)ARRAY[1][1] &

              (o___102._0_8_ | o___102._8_8_ | (*o___107._0_8_ << ((byte)(*o___107._8_8_ >> 4) & 0xf | 1)) | (*o___107._0_8_ >> (0x40 - ((byte)(*o___107._8_8_ >> 4) & 0xf | 1)) &
               0x3f));
  return;
}

/*
        00401348 b8 40 00        MOV        EAX,0x40
                 00 00
        0040134d 89 c1           MOV        ECX,EAX
        0040134f 48 8b 55 e0     MOV        RDX,qword ptr [RBP + -0x20]
        00401353 48 8b 75 e8     MOV        RSI,qword ptr [RBP + -0x18]
        00401357 48 c1 ee 04     SHR        RSI,0x4
        0040135b 48 83 e6 07     AND        RSI,0x7
        0040135f 48 83 ce 01     OR         RSI,0x1
        00401363 48 89 8d        MOV        qword ptr [RBP + -0x288],RCX
                 78 fd ff ff
        0040136a 48 89 f1        MOV        RCX,RSI
        0040136d 48 d3 ea        SHR        RDX,CL
        00401370 48 8b 75 c0     MOV        RSI,qword ptr [RBP + -0x40]
        00401374 48 8b 76 08     MOV        RSI,qword ptr [RSI + 0x8]
        00401378 48 8b 7d c8     MOV        RDI,qword ptr [RBP + -0x38]
        0040137c 48 03 77 08     ADD        RSI,qword ptr [RDI + 0x8]
        00401380 48 21 f2        AND        RDX,RSI
        00401383 48 8b 34        MOV        RSI,qword ptr [o___102]                          = ??
                 25 70 20
                 60 00
        0040138b 48 0b 34        OR         RSI,qword ptr [o___102[8]]                       = null
                 25 78 20
                 60 00
        00401393 48 8b 3c        MOV        RDI,qword ptr [o___107]                          = ??
                 25 90 20
                 60 00
        0040139b 48 8b 3f        MOV        RDI,qword ptr [RDI]
        0040139e 4c 8b 04        MOV        R8,qword ptr [o___107[8]]                        = null
                 25 98 20
                 60 00
        004013a6 4d 8b 00        MOV        R8,qword ptr [R8]
        004013a9 49 c1 e8 04     SHR        R8,0x4
        004013ad 49 83 e0 0f     AND        R8,0xf
        004013b1 49 83 c8 01     OR         R8,0x1
        004013b5 4c 89 c1        MOV        RCX,R8
        004013b8 48 d3 e7        SHL        RDI,CL
        004013bb 4c 8b 04        MOV        R8,qword ptr [o___107]                           = ??
                 25 90 20
                 60 00
        004013c3 4d 8b 00        MOV        R8,qword ptr [R8]
        004013c6 4c 8b 0c        MOV        R9,qword ptr [o___107[8]]                        = null
                 25 98 20
                 60 00
        004013ce 4d 8b 09        MOV        R9,qword ptr [R9]
        004013d1 49 c1 e9 04     SHR        R9,0x4
        004013d5 49 83 e1 0f     AND        R9,0xf
        004013d9 49 83 c9 01     OR         R9,0x1
        004013dd 4c 8b 95        MOV        R10,qword ptr [RBP + -0x288]
                 78 fd ff ff
        004013e4 4d 29 ca        SUB        R10,R9
        004013e7 4c 89 d1        MOV        RCX,R10
        004013ea 49 d3 e8        SHR        R8,CL
        004013ed 4c 09 c7        OR         RDI,R8
        004013f0 48 09 fe        OR         RSI,RDI
        004013f3 48 21 f2        AND        RDX,RSI
        004013f6 48 8b 75 f0     MOV        RSI,qword ptr [RBP + -0x10]
        004013fa 48 89 16        MOV        qword ptr [RSI],RDX
        004013fd e9 a5 f8        JMP        LAB_00400ca7
                 ff ff
*/

