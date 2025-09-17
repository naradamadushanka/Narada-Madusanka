def isprime(n):
    if n<=1:
        return False
    for i in range(2,int(n**0.5)+1):
        if n%i==0:
            return False
    return True
num=int(input("Enter a number:"))
lis=[]
lis2=[]
for i in range(1,int(num**0.5)+1):
    if num%i==0:
        lis.append(i)
        lis.append(num/i)
for i in lis:
    if isprime(i):
        lis2.append(i)
print(max(lis2))