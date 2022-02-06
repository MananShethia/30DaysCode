
# if n != 0:
#     for i in range(2, int(n/2) + 1):
#         if n % i == 0:
#             if(i == 2 or i == 3 or i == 5):
#                 continue
#             else:
#                 print("false")
#                 break
#     else:
#         print("true")
# else:
#     print("false")
        

def isUgly(n):
    if (n == 1):
        return 1
    if (n <= 0):
        return 0
 
    if (n % 2 == 0):
        return (isUgly(n // 2))
         
    if (n % 3 == 0):
        return (isUgly(n // 3))
     
    if (n % 5 == 0):
        return (isUgly(n // 5))
 
    return 0

n = int(input())

if isUgly(n) == 1:
    print("true")
else:
    print("false")