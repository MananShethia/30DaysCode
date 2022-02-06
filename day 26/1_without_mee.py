n = int(input())

x = []
mul = 1
flag = False
for i in input().split():
    x.append(int(i))
    if int(i) != 0:
        mul *= int(i)
    else:
        flag = True

for i in x:
    if flag == True and i != 0:
        print(0, end=" ")
        continue
    elif flag == True:
        print(mul, end=" ")
        continue
    print(int(mul / i), end=" ")
