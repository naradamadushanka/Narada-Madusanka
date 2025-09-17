def ispalindromenumber(n):
    return str(n) == str(n)[::-1]
lis=[]
for i in range(1,1000):
    for j in range(1,1000):
        product=i*j
        if ispalindromenumber(product):
            lis.append(product)
print(max(lis))