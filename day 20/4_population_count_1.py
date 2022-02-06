def solve(matrix):
   d = defaultdict(int)
   res = [2051, 0]
   for YOB, YOD in matrix:
      for year in range(YOB, YOD):
         d[year] += 1
         if d[year] >= res[1]:
            if d[year] > res[1]:
               res = [year, d[year]]
            else:
               res = [min(year, res[0]), res[1]]
   return res[0]



n = int(input())
matrix = []
for i in range(n):
    col =[]
    x = [int(x) for x in input().split()]
    matrix.append(x)


print(solve(matrix))