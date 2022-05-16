echo "Enter First Number"
read n1
echo "Enter Second number"
read n2
echo 

if [ $n1 -gt $n2 ]

then
    echo The Biggest Number is:$n1
else
    echo The Biggest Number is:$n2
fi
