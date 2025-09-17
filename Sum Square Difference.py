x1=0
x2=0
for i in range(1,101):
    x1=x1+(i**2)
for i in range(1,101):
    x2=x2+i
x2=x2**2
print(x2-x1)