def multiplesof3or5(n):
    sum=0
    for i in range(n):
        if i%3==0 or i%5==0:
            sum+=i
    print(sum)
multiplesof3or5(1000)