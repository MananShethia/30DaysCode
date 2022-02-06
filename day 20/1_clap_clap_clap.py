n = int(input())
flag = False
for i in range(1, n+1):
    if i%3 == 0:
        print("clap", end=" ")
        continue
    x = [int(a) for a in str(i)]
    for j in range(len(x)):
        if x[j]%3 == 0 and x[j] != 0:
            print("clap", end=" ")
            flag = True
            continue
    if flag == True:
        flag = False
        continue
    # if i%3 == 0:
    #     print("clap", end=" ")
    if i%3 != 0:
        print(i, end=" ")