m = int(input())
n = int(input())
k = int(input())

matrix = []
for i in range(m):
    x = [int(x) for x in input().split()]
    matrix.append(x)

result = []
for i in range(m):
    for j in range(n):
        result.append(matrix[i][j])

result.sort()
print(result[k])