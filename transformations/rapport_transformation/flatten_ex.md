<table style="max-width: 100%;"><tr><th>
Obfusqué
</th>

<th>
Décompilé
</th></tr>
<tr><td style="max-width: 350px;"><pre style="white-space: pre-wrap;">
// switch
while (1) {
  switch (_1_main_next) {
  case 1: 
    printf((char const   */* __restrict  */)"True");
    _1_main_next = 3UL;
    break;
  case 3: ;
    return (0);
    break;
  case 0: ;
    if (number >= 10) {
      _1_main_next = 1UL;
    } else {
      _1_main_next = 3UL;
    }
    break;
  case 2: 
    number = 10;
    _1_main_next = 0UL;
    break;
  }
}

// goto
_1_main_next = 2UL;
goto *(_1_main_jumpTab[_1_main_next - 0]);
_1_main_lab1: /* CIL Label */ 
printf((char const   */* __restrict  */)"True");
goto _1_main_lab3;
_1_main_lab3: /* CIL Label */ ;
return (0);
_1_main_lab0: /* CIL Label */ ;
if (number >= 10) {
  goto _1_main_lab1;
} else {
  goto _1_main_lab3;
}
_1_main_lab2: /* CIL Label */ 
number = 10;
goto _1_main_lab0;

// indirect
void *_1_main_jumpTab[4]  = {&& _1_main_lab0, && _1_main_lab1, && _1_main_lab2,
                               && _1_main_lab3};
_1_main_next = 2UL;
goto *(_1_main_jumpTab[_1_main_next - 0]);
_1_main_lab1: /* CIL Label */ 
printf((char const   */* __restrict  */)"True");
_1_main_next = 3UL;x
goto *(_1_main_jumpTab[_1_main_next - 0]);
_1_main_lab3: /* CIL Label */ ;
return (0);
goto *(_1_main_jumpTab[_1_main_next - 0]);
_1_main_lab0: /* CIL Label */ ;
if (number >= 10) {
  _1_main_next = 1UL;
} else {
  _1_main_next = 3UL;
}
goto *(_1_main_jumpTab[_1_main_next - 0]);
_1_main_lab2: /* CIL Label */ 
number = 10;
_1_main_next = 0UL;
goto *(_1_main_jumpTab[_1_main_next - 0]);

// call (error à l'obfuscation)
</pre></td>
<td style="max-width: 350px"><pre style="white-space: pre-wrap;">
// switch
(défaut)

// goto
/* WARNING (jumptable): Heritage AFTER dead removal. Example location: s0xffffffffffffffd8 :
   0x001011ab */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
void main(undefined4 param_1,undefined8 param_2,undefined8 param_3){
                    /* WARNING: Could not recover jumptable at 0x001011b1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)0x1011d7)();
  return;
}

// indirect
/* WARNING (jumptable): Heritage AFTER dead removal. Example location: s0xffffffffffffffc8 :
   0x001011ab */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
void main(undefined4 param_1,undefined8 param_2,undefined8 param_3){
                    /* WARNING: Could not recover jumptable at 0x001011d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)&LAB_00101201)();
  return;
}
</pre></td></tr></table>