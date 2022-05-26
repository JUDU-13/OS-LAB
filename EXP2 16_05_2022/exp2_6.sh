echo "How many numbers do you want of Fibonacci series ?"
read n;
f=0;
s=1;
echo "The Fibonacci series up to $n term:";
echo "$f";
echo  "$s";
for((i=2;i<=n;i++))
do
fib=$((f+s));
f=$s;
s=$fib;
echo "$fib";
done
