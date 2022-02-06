t = input()
n = int(input())
x = input()

minEle = ""
for i in range(n-1, -1, -1):
    if x[i] > t:
        minEle = x[i]
    else:
        break
if minEle == "":
    print(x[0])
else:
    print(minEle)
