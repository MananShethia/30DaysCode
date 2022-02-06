n = int(input())
x = [int(x) for x in input().split()]
jump = [False]*len(x)
jump[0] = True
for i in range(len(x)):
    for j in range(i-1,-1,-1):
        if jump[j] == True and x[j] + j >= i:
            jump[i] = True
            break
if jump[-1] == True:
    print("true")
else:
    print("false")
