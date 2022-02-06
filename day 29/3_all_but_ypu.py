n = int(input())
x = [int(x) for x in input().split()]

solution = 0
for i in x:
    smallFlag = False
    largeFlag = False
    count = 0
    for j in x:
        if i > j and largeFlag == False:
            count += 1
            largeFlag = True
        if i < j and smallFlag == False:
            count += 1
            smallFlag = True
        if count == 2:
            solution += 1
            break

print(solution)