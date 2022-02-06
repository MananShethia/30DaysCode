def find_factor(num):
    factor = []
    for i in range(1, num+1):
        if num % i == 0:
            factor.append(i)
    return factor

def intersection(lst1, lst2):
    lst3 = [value for value in lst1 if value in lst2]
    return lst3

n = int(input())
x = []
inter = []
flag = 1
for i in input().split():
    x.append(int(i))
    # print(find_factor(int(i)))
    if flag == 1:
        inter = find_factor(int(i))
        flag = 0
    else:
        inter = intersection(inter, find_factor(int(i)))
print(max(inter))