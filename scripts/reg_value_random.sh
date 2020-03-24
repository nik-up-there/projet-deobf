
# READ ME
# Script pour récupérer le résultat $rdx à l'adresse XXX et voir si c'est bien le résultat final
# selon le .gitinit
# ./reg_value.sh <range-in> <range-out> [<filename>]
echo "Start reg_value.sh script"

file=$1
if [ "$file" = "" ]; then
	file="test.txt"
else
  if test -f "$file"; then
      echo "File Exist"
      rm ${file}
  fi
  touch ${file}
fi

for i in {1..100}
    do
      res=$(gdb -x .gdbinit_b --args 1.1 $RANDOM | tail -1 | awk 'NF{print $NF}' )
      echo "$i $res" >> ${file}
    done  

echo "In file $file:"
cat ${file}
exit 1