length = int(input())
target = int(input())
x = [int(x) for x in input().split()]

index = []
for i in range(length):
    if x[i] == target:
        index.append(i)

if index:
    print(min(index), max(index))
else:
    print("-1 -1")
