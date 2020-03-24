
# READ ME
# ./compare.sh <path-to-exec1> <path-to-exec2> [input1 input2 input3..]
# If no input given, compare on 10 random values
echo "Exécution de la comparaison"

##### Script (avec le path de compare.sh jusqu'à l'exec?)
script1=$1
script2=$2
shift
shift

# Check script 1
if [[ -x "$script1" ]]
then
    echo "File '$script1' is executable"
else
    echo "File '$script1' is not executable or found"
    exit 0
fi

# Check script 2
if [[ -x "$script2" ]]
then
    echo "File '$script2' is executable"
else
    echo "File '$script2' is not executable or found"
    exit 0
fi

#### Compare
function compare() {
  args=$@

  # echo ${script1} ${args}
  output1=$($script1 $args)
  output2=$($script2 $args)

  echo
  echo "Arg     : $args"
  echo "Output 1: $output1"
  echo "Output 2: $output2"
  if [ $output1 = $output2 ]; then
    echo "Outputs are the same"
  else
    echo "Outputs are different"
  fi
}

function batch_compare() {
  arg_list=$@
  # Si des arguments donnés, on itère dessus
  if [ ! -z "$arg_list" ]; then  # [ ! .. ] pour not
    for arg in $arg_list 
    do
      compare $arg
    done  
  # Sinon itère 10 fois avec des valeurs random
  else
    arg_list=$(seq 0 10)
    for arg in $arg_list # ou {1..10}
    do
      compare $RANDOM
    done  
  fi
}

# RUN
batch_compare $@

exit 1
