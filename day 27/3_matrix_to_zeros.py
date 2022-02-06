m = int(input())
n = int(input())

matrix = []
for i in range(m):
    x = [int(x) for x in input().split()]
    matrix.append(x)

row_set = set()
col_set = set()
for i in range(m):
    for j in range(n):
        if matrix[i][j] == 0:
            if i not in row_set:
                row_set.add(i)
            if j not in col_set:
                col_set.add(j)

for i in row_set:
    for j in range(n):
        matrix[i][j] = 0

for j in col_set:
    for i in range(m):
        matrix[i][j] = 0

for i in range(m):
    for j in range(n):
        print(matrix[i][j], end=" ")
    print()