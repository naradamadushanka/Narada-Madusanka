def gen(n):
    for i in range(n):
        yield i * i
x=gen(5)
for i in x:
    print(i)
print(x)
print('-------------------')
for i in gen(10):
    print(i)