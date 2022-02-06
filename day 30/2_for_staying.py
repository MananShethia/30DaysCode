n = int(input())
x = [int(x) for x in input().split()]

flag = False
for i in range(n):
    for j in range(n):
        if x[i] == 2*x[j]:
            flag = True
            break
        if flag == True:
            break

if flag == True:
    print("true")
else:
    print("false")