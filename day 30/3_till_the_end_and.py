n = int(input())
x = [int(x) for x in input().split()]

max = 0
for i in range(n):
    for j in range(i+1, n):
        if max < x[i] + x[j] + (i - j):
            max = x[i] + x[j] + (i - j)

print(max)