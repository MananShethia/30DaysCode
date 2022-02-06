ruleKey = input()
ruleValue = input()
length = int(input())

iterate = -1
if ruleKey == "type":
    iterate = 0
elif ruleKey == "color":
    iterate = 1
elif ruleKey == "name":
    iterate = 2


matrix = []
for i in range(length):
    x = [x for x in input().split()]
    matrix.append(x)

count = 0
for i in range(length):
    if matrix[i][iterate] == ruleValue:
        count += 1

print(count)