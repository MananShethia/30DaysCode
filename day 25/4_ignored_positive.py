n = int(input())
x = [int(x) for x in input().split()]

x.sort()
min_num = 1
for i in x:
    if i > 0:
        if i <= min_num:
            min_num += 1

print(min_num)