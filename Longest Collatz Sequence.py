def seq(n):
    l=[]
    while True:
        l.append(n)
        if n==1:
            break
        if n%2==0:
            n=n/2
            
        else:
            n=(3*n)+1
            
    return l
max=0
for i in range(1,1000000):
    if len(seq(i))>max:
        
        max=i
    
print(max)