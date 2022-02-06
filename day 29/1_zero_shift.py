n = int(input())
x = [int(x) for x in input().split()]

len = 0
for i in x:
    if i == 0:
        len += 1
        x.remove(0)

x.extend([0 for i in range(len)])
for i in x:
    print(i, end=" ")