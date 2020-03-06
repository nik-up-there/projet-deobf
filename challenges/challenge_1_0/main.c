#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc,long param2, undefined8 param_3)

{
    long var1;
    long tab1[4];
    tab1[2] = param_3;
    tab1[3] = param2;

    // resume de la fonction o___64
    *(undefined8 *)(o___102 + (long)0 * 8) = 0;
    *(undefined8 *)(o___102 + (long)1 * 8) = 0;

    // verification du nb d'input de l'utilisateur
    if (argc != 2) {
        printf("Call this program with %i arguments\n",1);
        exit(-1);
    }

    // coeur de la fonction
    var1 = strtoul(*(char **)(tab1[3] + (long)8),(char **)0x0,10);
    tab1[1] = var1;
    function1(tab1 + 1, tab1);
    printf("%lu\n",tab1[0]);
    return 0;
}


void function1(undefined8 param_1,undefined8 param_2)

{
    undefined local_308 [376];
    code *UNRECOVERED_JUMPTABLE;
    undefined8 local_150;
    undefined8 local_18;
    undefined8 local_10;

    local_18 = param_2;
    local_10 = param_1;
    memcpy(local_308,&PTR_LAB_00401ab0,0x1b8); //440 octets
    local_150 = 0x31; //49
    /* WARNING: Could not recover jumptable at 0x0040194a. Too many branches */
    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
}