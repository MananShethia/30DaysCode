n = int(input())
x = [int(x) for x in input().split()]

count = 0
check = 0
flag = True
i = 0
while i < n:
    i1 = i
    # print(i, end=" ")
    while i1 < n and x[i1] == 1:
        if count == 0:
            count += 1
        # print("i1 : ", i1, end=" ")
        i1 += 1
    if i != i1:
        i = i1
    else:
        i += 1
    if count == 1:
        check += 1
        count = 0
    # print(">>i : ", i)
# print(check)
if check == 1:
    print("true")
else:
    print("false")
