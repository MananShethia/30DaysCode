n = int(input())
lst = []
lst_new = []
if n % 2 == 0:
    x = [x for x in input().split()]
    for i in range(n):
        lst.append(x[i].replace("D", "p"))
    for i in range(n):
        for j in range(i+1, n):
            if lst[i] < lst[j] and lst[i][1] == lst[j][1]:
                lst_new.append(1)
                break
if(len(lst_new) == n/2):
    print("true")
else:
    print("false")
