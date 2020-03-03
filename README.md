# README

## Kali

**Commande pour avoir internet**:
```
sudo ifconfig eth0 up
sudo dhclient eth0
```

## Compilation

**Commande pour compiler un fichier .c avec gcc**
```
gcc ./filename.c -o outputname
```

**Commande pour run un fichier compilé**
```
./outputname arg1 arg2 ...
```

## Fichiers de tests 

**Fichier a ecrire :**
1. if/if_else/if_if_else_else
1. for/while
1. affectation
1. modification de bits (decalage)
...

## Transformations

**Todolist :**
1. ~~Split~~
1. Merge
1. Flatten
1. Add Opaque
1. Encode literals
1. Encode data
1. Encode arithmetics
1. Encode external
1. Anti Alias Analysis
1. Anti Taint Analysis
1. Opaque
1. Implicit Flow
1. Randomize argument
1. Virtualize
1. Jitter
1. DynamicJit


**Pour chaque transformations dire :**
(cf exemple dans le fichier rapport.md)
1. Dire les fichiers qu’on teste et identifier les modifications
1. Exemples de commandes utilisée 
1. Lister les options + ce quelle font
1. Quand est ce qu'il faut faire la tranformation pour bien obfusquer son code/Faut il executer d'autres options avant pour pouvoir l'utiliser
1. Dire si on peut et comment l'automatiser

**A voir plus tard :**
1. Random function qui a permis de generer les challenge peut etre  
1. Clean up pour clean le code. quand est ce que ca sert ? 
1. Entropy ? 
1. Mesure pour regarder les performances d’une fonction
1. Copy pour copier une fonction ex: la merger avec elle meme
1. Self modify ?
