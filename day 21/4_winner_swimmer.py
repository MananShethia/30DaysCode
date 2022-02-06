def solve(nums):
   if not nums:
      return 0
   n = len(nums)
   ans = 0
   nums.sort()
   a = 0
   for i in range(n - 1, -1, -1):
      cand = nums[i] + n - i
      if cand > a:
         a = cand
   for x in nums:
      if x + n >= a:
         ans += 1
   return ans

nums = int(input())
x = [int(x) for x in input().split()]
# print(solve(x))
solve(x)