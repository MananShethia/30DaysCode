n = int(input())
x = [int(x) for x in input().split()]

dict = {}

for i in range(n+1):
    dict[i] = 1

for i in x:
    for j in range(n+1):
        if j == i:
            dict[j] = 0

for i in range(n+1):
    if(dict[i] == 1):
        print(i, end=" ")