n = int(input())
target = int(input())
x = [int(x) for x in input().split()]

x.sort()

len = 0
for i in range(n):
    if x[i] < target:
        target -= x[i]
        len += 1
print(len)