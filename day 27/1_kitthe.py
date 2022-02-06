n = int(input())
target = int(input())
x = [int(x) for x in input().split()]

for i in range(len(x)):
    if target == x[i]:
        print(i)
        break
    if i == n-1:
        print(-1)
        break