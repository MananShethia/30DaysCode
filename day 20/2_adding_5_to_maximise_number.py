n = int(input())
flag = False
if(n < 0):
    flag = True

sn = str(abs(n))

max = ""
i = 0

if flag == True:
    while ((i < len(sn)) and (5 >= (ord(sn[i]) - ord('0')))):
        max += (sn[i])
        i += 1
else:
    while ((i < len(sn)) and (5 <= (ord(sn[i]) - ord('0')))):
        max += (sn[i])
        i += 1
max += (chr(5 + ord('0')))
while (i < len(sn)):
    max += (sn[i])
    i += 1
if flag == True:
    print("-"+max)
else:
    print(max)
