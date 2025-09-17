noofterm=int(input("Enter the number of terms:"))
if noofterm <=0:
   print("Please enter a positive integer")
elif noofterm ==1:
   print(1)
else:
    n1=1
    n2=1
    for i in range(noofterm):
        
        if n1>=n2:
            print(n1)
            n2=n1+n2
        else:
            print(n2)
            n1=n1+n2

