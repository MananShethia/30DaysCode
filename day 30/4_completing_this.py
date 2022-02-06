n = int(input())
x = [int(x) for x in input().split()]

max1 = 0
max2 = 0

for i in range(n):
    if i%2 == 0:
        max1 += x[i]
    else:
        max2 += x[i]

if max1 > max2:
    print(max1)
else:
    print(max2)
    