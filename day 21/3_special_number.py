m = int(input())
n = int(input())
matrix = []
for i in range(m):
    col = []
    x = [int(x) for x in input().split()]
    matrix.append(x)

lst = []
prev_min_index = -1
for i in range(m):
    minimum = min(matrix[i])
    min_index = matrix[i].index(minimum)
    for j in range(m):
        lst.append(matrix[j][min_index])
    prev_min_index = min_index
    if max(lst) == min(matrix[i]):
        ele = min(matrix[i])
        print(ele, end=" ")
    else:
        lst = []
