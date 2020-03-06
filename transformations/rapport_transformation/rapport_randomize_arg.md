# Flatten transformation

![img](./../assets/rndargs_schema.png)

**Sources**:
https://tigress.wtf/randomizeArguments.html

**Transformation**

**Comment Tigress fait la transformation Split**
(Options)

(Explication)

(Rq: ...)

En conclusion, ...

**Comment déobfusquer la transformation Split**

**Exemples**
(Détails de ce que l'on voit dans les exemples)

## Exemple de transformation 
On part du fichier .c suivant :
```c
// Original
int function_with_3_args(int cpt, char* str, long long pow) {
    int len = sizeof(str);
    long long value = cpt * len * pow;
	printf("value : %lld", value);    
	return 0;
}
```

Dans un premier temps, nous allons tester la transformation RandomizeArgument sans spécifier d'option particulière
```
tigress --Environment=x86_64:Linux:Gcc:4.6 \
    --Transform=RndArgs \
        --Functions=function_with_3_args \
    --out=randomize_args_exemple1.c \
    /path_to_file/file_name.c
```

<table style="width: 700px;">
    <tr>
        <th>Obfusqué</th>
        <th>Décompilé</th>
    </tr>
    <tr>
        <td style="max-width:350px;"><pre><code>
int function_with_3_args(char *str, long long pow, int cpt) { 
  int len;
  int tmp;
  long long value;
  tmp = strlen(str);
  len = tmp;
  value = (long long)(cpt * len) * pow;
  printf((char const  */* __restrict  */)"value : %lld", value);
  return (0);
}
        </code></pre></td>
        <td style="max-width: 350px"><pre>
undefined8 _function_with_3_args(char *param_1,long param_2,int param_3) {
    size_t sVar1;
    sVar1 = _strlen(param_1);
    _printf("value : %lld",(param_3 * (int)sVar1) * param_2);
    return 0;
}
        </pre></td>
    </tr>
</table>

RQ ????
Dans un second temps, nous allons donc tester la transformation RandomizeArgument en specifiant a tigress de rajouter des arguments supplémentaires. 
```
tigress --Environment=x86_64:Linux:Gcc:4.6 \
    --Transform=RndArgs \
        --Functions=function_with_3_args \
        --RndArgsBogusNo=2 \
    --out=randomize_args_exemple2.c \
    /path_to_file/file_name.c
```

<table style="width: 700px;">
    <tr>
        <th>Obfusqué</th>
        <th>Décompilé</th>
    </tr>
    <tr>
        <td style="max-width:350px;"><pre>
int function_with_3_args(double bogus___1, long long pow, char *str, int cpt, void *bogus___2) { 
  int len;
  int tmp;
  long long value;
  tmp = strlen(str);
  len = tmp;
  value = (long long)(cpt * len) * pow;
  printf((char const  */* __restrict  */)"value : %lld", value);
  return (0);
}
        </pre></td>
        <td style="max-width: 350px"><pre>
undefined8 _function_with_3_args(long param_1,char *param_2,int param_3) {
    size_t sVar1;
    sVar1 = _strlen(param_2);
    _printf("value : %lld",(param_3 * (int)sVar1) * param_1);
    return 0;
}
        </pre></td>
    </tr>
</table>

RQ ????
On va donc maintenant essayer de combiner cette transormation avec la transformation 
```
tigress --Environment=x86_64:Linux:Gcc:4.6 \
    --Transform=RndArgs \
        --Functions=function_with_3_args \
        --RndArgsBogusNo=2 \
    --Transform=EncodeLiterals \
        --EncodeLiteralsKinds=string \
    --out=randomize_args_exemple3.c \
    /path_to_file/file_name.c
```

<table style="width: 700px;">
    <tr>
        <th>Obfusqué</th>
        <th>Décompilé</th>
    </tr>
    <tr>
        <td style="max-width:350px;"><pre>
            code obfusqué
        </pre></td>
        <td style="max-width: 350px"><pre>
            code decompilé
        </pre></td>
    </tr>
</table>

RQ ????