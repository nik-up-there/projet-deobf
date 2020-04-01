# READ ME
# Script pour trouver un argument qui va bien dans la structure de contrôle qu'on veut checker
# ./<filename>
echo "Start ${0} script"

out=0
while [ $out != 3 ]
do
	arg=$RANDOM
	MY_PATH=$(pwd)
	res=$(./1_1_solution2 $arg | tail -1 | awk 'NF{print $NF}' )
	if [ "$res" = "1" ];
	then
		echo "Argument bien = $arg"
		((out=out+1))
	fi
done
