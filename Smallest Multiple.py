def isprime(n):
    for i in range(2, int(n**0.5) + 1):
        if n%i == 0:
            return False
    return True
l=[]
l1=[]
x=1
for i in range(2,11):
    if isprime(i):
        l.append(i)
        l1.append(i)
y=0
l3=[i for i in range(10,1,-1)]
while True:
    y=0
    
    for i in l:
        for j in l3:
            if j%i==0 :
                
                y=1
                l1.append(int(j/i))
                l3.remove(j)
            print(l3)
            print(l1)
    if y==1:
        break
    if l3==[]:
        break
        
for i in l1:
    x=x*i
print(x)