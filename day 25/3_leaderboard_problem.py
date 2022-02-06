n = int(input())
x = [int(x) for x in input().split()]
y = x
dict = {}
# x = x.sorted(reverse = True)
x = sorted(x, reverse=True)
rank = 0
index = 0
for i in x:
    if(index != 0):
        rank += 1
        if i == x[index - 1]:
            rank -= 1
            dict[i] = rank
        else:
            dict[i] = rank

    else:
        dict[i] = rank

    index += 1

for i in y:
    print(dict[i], end=" ")