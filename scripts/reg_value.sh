
# READ ME
# Script pour faire tourner gdb sur plusieurs inputs et récupérer un valeur de registre/adresse à un endroit du pgm
# selon le .gitinit
# ./reg_value.sh <range-in> <range-out> [<filename>]
echo "Start reg_value.sh script"

in=$1
out=$2
file=$3
if [ "$file" = "" ]; then
	file="test.txt"
else
  if test -f "$file"; then
      echo "File Exist"
      rm ${file}
  fi
  touch ${file}
fi

# for i in {1..5}
for (( i=$in; i<=$out; i++ ));
    do
      res=$(gdb -x .gdbinit --args 1.1 $i | tail -1 | awk 'NF{print $NF}' )
      echo "$res $i" >> ${file}
    done  

echo "In file $file:"
cat ${file}
exit 1