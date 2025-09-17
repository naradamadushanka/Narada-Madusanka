def isprime(n):
    if n<=1:
        return False
    for i in range(2,int(n**0.5)+1):
        if n%i==0:
            return False
    return True

cou2=0
prime=1
while  cou2<10001:
  
    prime=prime+1
    if isprime(prime):
        
        cou2+=1
        if cou2==10001:
            print(prime)
            break