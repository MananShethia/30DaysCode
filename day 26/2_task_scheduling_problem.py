from collections import deque
import heapq


n = int(input())
k = int(input())


def count_dict(dt, lst):
    for i in lst:
        dt[i] += 1
    return dt


x = []
dict = {}
for i in input().split():
    x.append(i)
    dict[i] = 0

dict = count_dict(dict, x)
# print(dict)

values = list(dict.values())
values.sort(reverse=True)
# print(values)

maxHeap = [-val for val in values]
heapq.heapify(maxHeap)

time = 0
q = deque()

while maxHeap or q:
    time +=1
    if maxHeap:
        val = 1 + heapq.heappop(maxHeap)
        if val:
            q.append([val, time + k])
    if q and q[0][1] == time:
        heapq.heappush(maxHeap, q.popleft()[0])

print(time)