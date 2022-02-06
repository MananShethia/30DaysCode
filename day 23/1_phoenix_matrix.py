m = int(input())
n = int(input())

matrix = []
for i in range(m):
    col = []
    x = [int(x) for x in input().split()]
    matrix.append(x)

diagonal = []
flag = True
for j in range(n-1,-1,-1):
    j1 = j
    i1 = 0
    # for i in range(m):
    #     i1 = i
    while i1 < m and j1 < n:
        diagonal.append(matrix[i1][j1])
        i1 += 1
        j1 += 1
    if(len(set(diagonal)) == 1):
        diagonal = []
        continue
    else:
        flag = False
        break

for i in range(m-1,-1,-1):
    i1 = i
    j1 = 0
    while i1 < m and j1 < n:
        diagonal.append(matrix[i1][j1])
        i1 += 1
        j1 += 1
    if(len(set(diagonal)) == 1):
        diagonal = []
        continue
    else:
        flag = False
        break

if flag == True:
    print("true")
else:
    print("false")