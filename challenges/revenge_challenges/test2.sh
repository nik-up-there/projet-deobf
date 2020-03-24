# READ ME
# Script pour faire tourner gdb sur plusieurs inputs et récupérer un valeur de registre/adresse à un endroit du pgm
# selon le .gitinit
echo "Start test2.sh script"
# file=$1
# if test -f "$file"; then
#     echo "File Exist"
#     rm ${file}
# fi
# touch ${file}
# echo "salut" >> ${file}

for (( i=$1; i<=$2; i++));
  do
    echo $i
  done
exit 1