def fac(n):
    l=[]
    for i in range(1,n+1):
        if n%i==0:
            l.append(i)
    return l
cou=0
while True:
    cou+=1

    l=fac(int((cou*(cou+1))/2))
    if len(l)>=5:
        print(int((cou*(cou+1))/2))
        break
        
