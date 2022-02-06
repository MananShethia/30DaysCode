n = int(input())

x = []
dict = {}
for i in input().split():
    x.append(int(i))
    dict[int(i)] = 0

for i in x:
    dict[i] += 1
for i in x:
    if dict[i] == 1:
        print(i)
        break