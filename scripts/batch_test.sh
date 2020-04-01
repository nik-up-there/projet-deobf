
# READ ME
# ./compare.sh <path-to-exec1> <path-to-exec2> [input1 input2 input3..]
# If no input given, compare on 10 random values
echo "Exécution des tests"

##### Script (avec le path de compare.sh jusqu'à l'exec?)
script=$1

for i in {1..100}
do
  arg=$RANDOM
  res=$($script $arg)
  echo "arg: $arg res= $res"
done

exit 1
