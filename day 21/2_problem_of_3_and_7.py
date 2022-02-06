n = int(input())

flag = False
for i in range(0, n+1):
    for j in range(0, n+1):
        if (i*7 + j*3) == n:
            flag = True
            print("true")
            break
        if (i*7 + j*3) > n:
            break
    if (flag == True):
        break
if (flag == False):
    print("false")
