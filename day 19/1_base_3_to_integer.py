no = input()
sum = 0
for i in range(0, len(no)):
    sum += int(no[len(no)-1-i]) * (3**i)
print(sum)
