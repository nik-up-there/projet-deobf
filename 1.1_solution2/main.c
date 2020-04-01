#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void o___97(unsigned long *, unsigned long *);
void print_variables(char*, unsigned long[], unsigned long[], unsigned long*[], long**[]);
void print_specific(char*, unsigned long[], unsigned long[], unsigned long*[], long**[]);
void print_structure(char*);

int main(int argc, char** argv) {
  unsigned long *arg = (unsigned long*)malloc(sizeof(unsigned long));
  unsigned long *res = (unsigned long*) malloc(sizeof(unsigned long));

  *arg = strtoul(argv[1], (char **) 0x0, 10);
  o___97(arg, res);
  return 0;
}

void o___97(unsigned long *param_1, unsigned long *param_2) {
  long **ARRAY[4];
  
  unsigned long uStack[2]; // $rbp-0x20, $rbp-0x18 (uStack[0] = uStack40, uStack[1] = uStack32)
  
  unsigned long *res;
  unsigned long *arg;

  unsigned long o___102[2]; // 0x602070 et 0x602078
  unsigned long* o___107[2]; // 0x602090 et 0x602098

  int flag;
  flag = 0;

  // ---------------------- UNUSED VARIABLE --------------------------------------------
  // Other unused variable deleted copying other variables (***Stack0-216, o___104)
  /*undefined8 local_138;
  undefined local_268[304];

  memcpy(local_268, &PTR_LAB_00401a00, 0x128);
  local_138 = 0x1f;*/

  // ----------------------- INITIALISATION AVEC DES VALEURS BRUTES --------------------
  res = param_2;
  arg = param_1;

  ARRAY[2] = (long **) 0x0;
  ARRAY[3] = (long **) 0x0;
  ARRAY[0] = (long **) 0x0;
  ARRAY[1] = (long **) 0x0;
  uStack[0] = (*arg ^ 0x18d5b5b7) + 0x76d5b0c6000;
  uStack[1] = *arg - 0x53b4d34 | uStack[0] | 0x968a408;
  o___102[0] = *arg | 0x2ae0a098b67fadab;
  o___102[1] = (*arg | 0xd5e5554) - 0x43e340d3;


  // ----------------------- AFFECTATION DES VARIABLES --------------------
  //STACK 216
  long **pplStack216 = (long **) malloc(0x18);
  *(long ***) pplStack216 = pplStack216;
  *(long ***) (pplStack216 + 2) = pplStack216;
  pplStack216[1] = (long *) 0x0;
  ARRAY[0] = pplStack216;
  ARRAY[2] = pplStack216;

  //STACK 224
  long **pplStack224 = (long **) malloc(0x18);
  pplStack224[1] = (long *) (*arg + o___102[0] + 0x2b64d785);
  *pplStack224 = *ARRAY[0];
  *(long ***) (pplStack224 + 2) = ARRAY[0];
  *(long ***) (*ARRAY[0] + 2) = pplStack224;
  *(long ***) ARRAY[0] = pplStack224;
  ARRAY[0] = (long **) *ARRAY[0];

  //STACK 232
  long **pplStack232 = (long **) malloc(0x18);
  *(long ***) pplStack232 = pplStack232;
  *(long ***) (pplStack232 + 2) = pplStack232;
  pplStack232[1] = (long *) 0x0;
  ARRAY[1] = pplStack232;
  ARRAY[3] = pplStack232;

  //STACK 240
  long **pplStack240 = (long **) malloc(0x18);
  pplStack240[1] = (long *) (*arg - 0x19d5f99a);
  *pplStack240 = *ARRAY[1];
  *(long ***) (pplStack240 + 2) = ARRAY[1];
  *(long ***) (*ARRAY[1] + 2) = pplStack240;
  *(long ***) ARRAY[1] = pplStack240;
  ARRAY[1] = (long **) *ARRAY[1];

  //STACK 248
  unsigned long *puStack248 = (unsigned long *) malloc(0x18);
  *(unsigned long * *)(puStack248 + 2) = puStack248;
  *(unsigned long * *)(puStack248 + 1) = puStack248;
  o___107[0] = puStack248;
  *puStack248 = 0;

  //STACK 256
  unsigned long *puStack256 = (unsigned long *) malloc(0x18);
  *puStack256 = (*arg + o___102[0]) >> (((char) uStack[1] + 0x26U & 0xf) | 1) |
                (*arg + o___102[0]) << (0x40 - (((char) uStack[1] + 0x26U & 0xf) | 1) & 0x3f);
  puStack256[2] = o___107[0][2];
  *(unsigned long * *)(puStack256 + 1) = o___107[0];
  *(unsigned long * *)(o___107[0][2] + 8) = puStack256;
  *(unsigned long * *)(o___107[0] + 2) = puStack256;
  o___107[0] = (unsigned long *) o___107[0][2];

  //STACK 264
  unsigned long *puStack264 = (unsigned long *) malloc(0x18);
  *(unsigned long * *)(puStack264 + 2) = puStack264;
  *(unsigned long * *)(puStack264 + 1) = puStack264;
  o___107[1] = puStack264;
  *puStack264 = 0;

  //STACK 272
  long *plStack272 = (long *) malloc(0x18);
  *plStack272 = (*arg + 0x2297cfce) * (o___102[0] + 0xb99206a);
  plStack272[2] = o___107[1][2];
  *(unsigned long * *)(plStack272 + 1) = o___107[1];
  *(long **) (o___107[1][2] + 8) = plStack272;
  *(long **) (o___107[1] + 2) = plStack272;
  o___107[1] = (unsigned long *) o___107[1][2];

//  print_variables("Init values: 0x400cb9", uStack, o___102, o___107, ARRAY);

  // --------------------------------- PARTIE CALCUL -------------------------------
  // 400cb9
  // ------------------------- COMP 1 ----------------------- OK
  if ((*o___107[1] >> 1 & 1) != 0) {
    // Modifie 10708 ou 10788 et Array01 ou Array11
    print_structure("COMP1 True");
    **(long **) (o___107 + ((long) (int) *o___107[1] & 1U)) = uStack[1] + *(long *) (o___102 + ((long) (int) uStack[1] & 1U));

    ARRAY[(long) (int) *o___107[0] & 1][1] = (long *) (&uStack[0])[(long) (int) o___102[0] & 1];

//    print_variables("COMP1 value: 0x4010e2", uStack, o___102, o___107, ARRAY);
  } else {
    print_structure("COMP1 False"); // 4010e2
  }

  // ------------------------- COMP 2 -----------------------
  if ((*o___107[0] >> 3 & 1) != 0) {
    print_structure("COMP2 True");
    unsigned long uVar5;

    // ------------------------- COMP 21 ----------------------- NEVER ?
    // On ne rentre jamais dedans?
    if ((uStack[1] >> 1 & 1) == 0) {
      print_structure("COMP21 True");
      print_structure("COMP21 True NOT DONE");
//      unsigned long uStack168;
//      unsigned int uStack164;
//      unsigned int uStack160;
//      uStack160 = 0;
//      uStack164 = 0;
//      while (uStack164 < 0x10) {
//        uVar5 = (long) (int) *o___107[1] & 1;
//        (&uStack[0])[uVar5] =
//          ((&uStack[0])[(long) (int) *o___107[1] & 1] & 0xf) << 2 | (&uStack[0])[uVar5];
//        uStack168 = *(unsigned long *)(&uStack[0] + ((unsigned long) uStack164 & 1));
//        *(unsigned long * )(&uStack[0] + ((unsigned long) uStack164 & 1)) =
//          *(unsigned long * )((long) &uStack[0] + ((unsigned long) uStack164 & 1) * 8 + 4);
//        *(unsigned long * )((long) &uStack[0] + ((unsigned long) uStack164 & 1) * 8 + 4) = uStack168;
//        ARRAY[1] = (long **) *ARRAY[1];
//        uStack160 = uStack160 + 1 & 1;
//        uStack164 = uStack164 + 1;
//        print_variables("COMP21 value: ???", uStack, o___102, o___107, ARRAY);
//      }
    } else {
      print_structure("COMP21 False");
      // ------------------------- COMP 215 ----------------------- OK
      if ((*o___107[1] >> 1 & 1) == 0) { // 400e55
        // Change array ARRAY[0][1] et 107[0], (ou 1 et 1)
        // Change l'adresse de ARRAY[0] de 0x602080 -> 0x602060, c0 -> a0 (Donc dans gdb j'observe les deux en plus)
        print_structure("COMP215 True");
        long uStack155;
        char uVar1;
        *(long **) (ARRAY + ((long) (int) *o___107[1] & 1)) = *ARRAY[(long) (int) *o___107[1] & 1];
        ARRAY[(long) (int) *o___107[0] & 1][1] = (long *) (&uStack[0])[(long) (int) *o___107[1] & 1];
        uVar1 = *(char * )(*(long *) ((char*) (o___107 + ((long) (int) *o___107[1] & 1U)) ) + 7);
        *(long * )(*(long *) ((char*) (o___107 + ((long) (int) *o___107[1] & 1U)) ) + 7) = *(long * )(*(long *) ((char*) (o___107 + ((long) (int) *o___107[1] & 1U)) ) + 6);
        *(char * )(*(long *) ((char*) (o___107 + ((long) (int) *o___107[1] & 1U)) ) + 6) = uVar1;
        uStack155 = *(long * )(*(long *) ((char*) (o___107 + ((long) (int) *o___107[1] & 1U)) ) + 6);
        *(char * )(*(long *) ((char*) (o___107 + ((long) (int) *o___107[1] & 1U)) ) + 6) = *(long * )(*(long *) ((char*) (o___107 + ((long) (int) *o___107[1] & 1U)) ) + 1);
        *(char * )(*(long *) ((char*) (o___107 + ((long) (int) *o___107[1] & 1U)) ) + 1) = uStack155;
      } else { // DO NOTHING ?
        print_structure("COMP215 False");
        unsigned long uStack144;
        unsigned long uStack140;
        uStack140 = 0;
        uStack144 = 0;
      }
      // ------------------------- END COMP 215 -----------------------
    } // 401078
//    print_variables("COMP21 value: 401078", uStack, o___102, o___107, ARRAY);
    // ------------------------- END COMP 21 -----------------------

    unsigned int uVar3;
    uVar3 = (unsigned int) uStack[1];
    // ------------------------- COMP 22 -----------------------
    if ((*(int *) (o___102 + (unsigned long)(uVar3 & 1)) +
         *(int *) (&uStack[0] + ((unsigned int) o___102[1] & 1)) & 3U) == 0) { // ON ne rentre jamais dedans? SI, la condition était mal calculée
      print_structure("COMP22 True");
      unsigned int uStack188;
      unsigned int uStack192;
      uStack188 = 0;
      uStack192 = 0;
      while (uStack192 < 8) {
        ARRAY[uStack188][1] =
          (long *) (*(long *) (o___102 + (unsigned long) uStack188) - (&uStack[0])[uStack188]);
        *(long **) (ARRAY + ((long) (int) o___102[0] & 1)) =
          *ARRAY[(long) (int) o___102[0] & 1];
        *(long **) (ARRAY + uStack188) = *ARRAY[uStack188];
        uStack188 = uStack188 + 1 & 1;
        uStack192 = uStack192 + 2;
      }
    } else {
      print_structure("COMP22 False");
      // ------------------------- COMP 225 -----------------------
      if ((*(int *) (o___102 + (unsigned long)(uVar3 & 1)) +
           *(int *) (&uStack[0] + ((unsigned int) o___102[1] & 1)) & 3U) == 1) { // Ne rentre Jamais dedans, Non, c'est la même condition que le if précédent dans le else...
        print_structure("COMP225 True");
        print_structure("COMP225 True NOT DONE");
        flag=1;
//        int iVar2;
        // ------------------------- COMP 2251 -----------------------
//        if (((*o___107[0] & 1) != 0) && ((uStack[1] & 1) == 0)) {
//          long *puStack288;
//
//          long *puStack176;
//          *(long **) (ARRAY + ((long) (int) ARRAY[0][1] & 1)) =
//            *ARRAY[(long) (int) ARRAY[0][1] & 1];
//          uVar5 = (long) (int) ARRAY[0][1] & 1;
//          (&uStack[0])[uVar5] =
//            ((&uStack[0])[(long) (int) uStack[1] & 1] & 0x1f) << 4 | (&uStack[0])[uVar5];
//          puStack288 = (long *) malloc(0x18);
//          puStack176 = puStack288;
//          iVar2 = (int) uStack[0];
//          *puStack288 = (&uStack[0])[(long) iVar2 & 1];
//          puStack288[2] = *(long * )(*(long *) (o___107 + ((long) iVar2 & 1U) * 8) + 0x10);
//          puStack288[1] = *(long * )(o___107 + ((long) iVar2 & 1U) * 8);
//          *(long * *)(*(long *) (*(long *) (o___107 + ((long) iVar2 & 1U) * 8) + 0x10) + 8) = puStack288;
//          *(long * *)(*(long *) (o___107 + ((long) iVar2 & 1U) * 8) + 0x10) = puStack288;
//        } // ------------------------- END COMP 2251 -----------------------

        // ------------------------- COMP 2252 -----------------------
//        if ((*o___107[1] >> 1 & 1) == 0) {
//          unsigned long *puStack296;
//          unsigned long *puStack184;
//          ARRAY[1][1] = (long *) (&uStack[0])[(long) (int) ARRAY[0][1] & 1];
//          o___107[1] = (unsigned long *) o___107[1][2];
//          puStack296 = (unsigned long *) malloc(0x18);
//          puStack184 = puStack296;
//          *puStack296 = uStack[1] | (&uStack[0])[(long) (int) o___102[0] & 1];
//          puStack296[2] = o___107[1][2];
//          *(unsigned long * *)(puStack296 + 1) = o___107[1];
//          *(unsigned long * *)(o___107[1][2] + 8) = puStack296;
//          *(unsigned long * *)(o___107[1] + 2) = puStack296;
//          iVar2 = (int) o___102[0];
//          *(long **) (ARRAY + ((long) iVar2 & 1)) = *ARRAY[(long) iVar2 & 1];
//          (&uStack[0])[(long) (int) o___102[1] & 1] = *(unsigned long * )(o___102 + ((long) iVar2 & 1U) * 8) >> (((*(unsigned long * )(o___102 + ((long) (int) ARRAY[0][1] & 1U) * 8) >> 1) & 7) | 1);
//          *o___107[1] = (&uStack[0])[(long) (int) ARRAY[0][1] & 1] * (&uStack[0])[(long) (int) ARRAY[1][1] & 1];
//        } // ------------------------- END COMP 2252 -----------------------
      } else {
        print_structure("COMP225 False");
        // ------------------------- COMP 2255 ----------------------- OK
        if ((*o___107[0] & 1) == 0) {
          print_structure("COMP2255 True");
          *(long **) (ARRAY + ((long) (int) uVar3 & 1)) = *ARRAY[(long) (int) uVar3 & 1];
          uStack[1] = (unsigned long)uStack[1];
//        print_variables("COMP 22515: 4017bd", uStack, o___102, o___107, ARRAY);
        } else {
          print_structure("COMP2255 False");
          printf("%s\n", "HERE");

          // ------------------------- COMP 22555 ----------------------- OK
          if ((o___102[1] >> 2 & 1) == 0) {
            print_structure("COMP22555 True");
            long **pplVar4;
            o___102[1] = ((&uStack[0])[(long) (int) uStack[0] & 1] & 7) << 2 | o___102[1];
            ARRAY[(long) (int) o___102[0] & 1][1] = (long *) (&uStack[0])[(long) (int) ARRAY[1][1] & 1];
            pplVar4 = (long **) malloc(0x18);
            pplVar4[1] = (long *) (*(long *) (o___102 + ((long) (int) ARRAY[0][1] & 1U) * 8) - o___102[0]);
            *pplVar4 = *ARRAY[0];
            *(long ***) (pplVar4 + 2) = ARRAY[0];
            *(long ***) (*ARRAY[0] + 2) = pplVar4;
            *(long ***) ARRAY[0] = pplVar4;
//            print_variables("COMP 22555: 40132a", uStack, o___102, o___107, ARRAY);
          } else { // NEVER FALSE
            print_structure("COMP22555 False");
          }// ------------------------- END OMP 22555 -----------------------
        } // ------------------------- END COMP 2255 -----------------------
      } // ------------------------- END COMP 225 -----------------------
    } // ------------------------- END COMP 22 -----------------------
  } else {
    print_structure("COMP2 FALSE");
  }// ------------------------- END COMP 2 -----------------------

  /* -------------------------- CALCUL DU RESULTAT ------------------------------- */
  // Removed (byte) conversion

  // Résultats pour 120
  //  uStack[1] =	0xfffffffffbeeb7cf;
  //  uStack[0] =	0x76d73e215cf;
  //  o___102[0] =	0x2ae0a098b67fadfb;
  //  o___102[1] =	0xffffffffc97b14a9;
  //  *o___107[0] = 0xffffffffc569cc78;,
  //  *o___107[1] =	0x3fc9cf84620d7f9e;
  //  ARRAY[0][1] =	(long) 0x2ae0992b429d982c;
  //  ARRAY[1][1] =	(long) 0xffffffffcd8c5cda;
  //  *res = 184684187654

//  print_variables("Final value: 0x4013fb", uStack, o___102, o___107, ARRAY);

  *res = uStack[0] >> (((uStack[1] >> 4) & 7) | 1) &
              (long) ARRAY[0][1] + (long) ARRAY[1][1] &
              (o___102[0] | o___102[1] |
               *o___107[0] << (((*o___107[1] >> 4) & 0xf) | 1) |
               *o___107[0] >> (0x40 - (((*o___107[1] >> 4) & 0xf) | 1) & 0x3f));

  printf("%lu\n", *res);
//  printf("%d", flag);
  return;
}

void print_variables(char* address, unsigned long uStack[], unsigned long o___102[], unsigned long* o___107[], long** ARRAY[]){
  printf("%s\n", address);
  printf("uStack[1]: 0x%lx\n", uStack[1]);
  printf("uStack[0]: 0x%lx\n", uStack[0]);
  printf("10208: 0x%lx\n", o___102[0]);
  printf("10288: 0x%lx\n", o___102[1]);
  printf("10708: 0x%lx\n", *o___107[0]);
  printf("10788: 0x%lx\n", *o___107[1]);
  printf("ARRAY0: 0x%lx\n", ARRAY[0][1]);
  printf("ARRAY1: 0x%lx\n\n", ARRAY[1][1]);
}

void print_specific(char* msg, unsigned long uStack[], unsigned long o___102[], unsigned long* o___107[], long** ARRAY[]){
  printf("%s\n", msg);
//  printf("uStack[1]: 0x%lx\n", uStack[1]);
//  printf("uStack[0]: 0x%lx\n", uStack[0]);
//  printf("10208: 0x%lx\n", o___102[0]);
//  printf("10288: 0x%lx\n", o___102[1]);
  printf("10708: 0x%lx\n", *o___107[0]);
//  printf("10788: 0x%lx\n", *o___107[1]);
//  printf("ARRAY0: 0x%lx\n", ARRAY[0][1]);
//  printf("ARRAY1: 0x%lx\n", ARRAY[1][1]);
  printf("\n");
}

void print_structure(char* msg){
//  printf("%s\n", msg);
}



