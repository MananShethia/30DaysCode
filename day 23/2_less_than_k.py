l = int(input())
k = int(input())
x = [int(x) for x in input().split()]

sum = 0
for i in range(l):
    sum += x[i]
    if sum <= k:
        continue
    else:
        if i == 0:
            print(-1)
        else:
            print(i - 1)
        break
