m = int(input())
n = int(input())
matrix = []
for i in range(m):
    x = [int(x) for x in input().split()]
    matrix.append(x)

for i in range(n):
    for j in range(m):
        print(matrix[j][i], end=" ")
    print()
