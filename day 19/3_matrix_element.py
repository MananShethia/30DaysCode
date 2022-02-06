n = int(input())

ls = []
for i in range(0, n):
    ls.append(list(map(lambda x: int(x), input().split())))

def find(ls, n):
    row = [x for x in range(1, n+1)]
    col = [x for x in range(1, n+1)]
    for i in range(0, n):
        for j in range(0, n):
            if ls[i][j] in row:
                row.remove(ls[i][j])
            else:
                print("false")
                return
            if ls[j][i] in col:
                col.remove(ls[j][i])
            else:
                print("false")
                return
        row = [x for x in range(1, n+1)]
        col = [x for x in range(1, n+1)]
    print("true")


find(ls, n)
