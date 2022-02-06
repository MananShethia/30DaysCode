n = int(input())
x = []
dict = {}
for i in input().split():
    x.append(int(i))
    dict[int(i)] = 0

for i in x:
    dict[i] += 1

dkl = list(dict.keys())
dvl = list(dict.values())
# dkl.sort()
# dvl.sort()

if len(dvl) == len(set(dvl)):
    print("true")
else:
    print("false")

# if(len(dkl) > len(dvl)):
#     if(dkl == dvl):
#         print("true")
#     else:
#         print("false")
# else:
#     if(dkl == dvl):
#         print("true")
#     else:
#         print("false")
