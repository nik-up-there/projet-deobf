# Merge transformation

![img](./../assets/merge_schema.png)

**Sources**:
https://tigress.wtf/merge.html

**Transformation**
La transformation **merge** permet de combiner plusieurs fonctions en une seule fonction.

**Comment Tigress fait la transformation Merge*
Il y a plusieurs méthodes de split que l'on peut spécifier avec les options (Default=top,block,deep,recursive).
- top = split the top-level list of statements into two functions funcname_split_1 and funcname_split_2.
- block = split a basic block (list of assignment and call statements) into two functions.
- deep = split out a nested control structure of at least height>2 into its own function funcname_split_1.
- recursive = same as block, but calls to split functions are also allowed to be split out.
- level = split out a statement at a level specified by --SplitLevel.
- inside = split out a statement at the innermost nesting level.

RQ : Cette transformation est utile en amont de la virtualisation ou du jitting: si vous souhaitez virtualiser à la fois foo et bar, merger les d'abord, puis virtualisez le résultat
RQ : Il y a fusions des arguments des fonctions
RQ : Merge s'appuie sur Flatten
RQ : 
RQ : Il est bien de run --Trandform=RndArgs apres un merge pour cacher le nouvel argument


Message d'erreur rencontrés :
```
This transformation cannot be applied to function(s) 'main' since it can only be applied to functions for which the signature may change
```
solution : Ne pas avoir de main 







``` c
void _1_multiply_ownprint_test(void *tigressRetVal , long long *factpointeur__0 ,
                               int i__1 , int whichBlock__5 ) 
{ 
  int i__2 ;
  long long fact__3 ;
  int number__4 ;

  {
  if (whichBlock__5 == 0) {
    *factpointeur__0 *= (long long )i__1;
    return;
  } else
  if (whichBlock__5 == 1) {
    printf((char const   */* __restrict  */)"Factorial of %d is: %lld\n", i__1, *factpointeur__0);
    return;
  } else
  if (whichBlock__5 == 2) {
    i__2 = 1;
    fact__3 = 1LL;
    number__4 = 10;
    i__2 = 1;
    while (i__2 <= number__4) {
      _1_multiply_ownprint_test(0, & fact__3, i__2, 0);
      i__2 ++;
    }
    _1_multiply_ownprint_test(0, & fact__3, number__4, 1);
    {
    *((int *)tigressRetVal) = 0;
    return;
    }
  } else {

  }
}
}
```

