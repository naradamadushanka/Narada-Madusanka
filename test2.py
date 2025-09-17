def tree(hight):
    for i in range(hight):
        print(" " * (hight - i - 1) + "*" * (2 * i + 1))
    
print(tree(5))