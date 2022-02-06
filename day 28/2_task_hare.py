tl = int(input())
pl = int(input())

task = [int(t) for t in input().split()]
person = [int(p) for p in input().split()]

max_task = max(task)
len = 0
for i in range(pl):
    maxT = -1
    prev_maxT = -2
    flag = False
    for j in range(tl):
        # print("check : ", i, j, person[i], task[j], maxT)
        # if task[j] == -1:
        #     continue
        if person[i] >= task[j] and task[j] > maxT:
                # print(person[i], task[j])
                maxT = task[j]
                prev_maxT = j
                flag = True
        if j == tl-1 and flag == True:
            task[prev_maxT] = max_task
            # print(j)
            len += 1
        
print(len)