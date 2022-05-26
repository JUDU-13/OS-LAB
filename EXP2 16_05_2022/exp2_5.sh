echo "Enter number to find the factorial"
read n
f=1
for((i=1;i<=n;i++))
{
  f=$((f*i))  
}
echo The factorical of $n is $f
