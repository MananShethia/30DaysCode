n = int(input())
max = 0
minHeight = 0
ls = list(map(lambda x: int(x), input().split()))
for i in range(0, len(ls)-1):
    for j in range(i+1, len(ls)):
        minHeight = min(ls[i], ls[j])
        if max < minHeight*(j-i):
            max = minHeight*(j-i)
print(max)
