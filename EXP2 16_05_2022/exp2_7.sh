echo "BASIC CALCULATOR"
echo "Enter First Numbers: "
read x
echo "Enter Second Numbers: "
read y

echo "Enter Choice :"
echo "1. Addition"
echo "2. Subtraction"
echo "3. Multiplication"
echo "4. Division"
read s

case $s in
1)r= echo Result:$x+$y=$(($x+$y));;
2)r= echo Result:$x-$y=$(($x-$y));;
3)r= echo Result:$x*$y=$(($x*$y));;
4)r= echo Result:$x/$y=$(($x/$y));;
esac
