def minStartValue(nums):

	# Store the minimum prefix sum
	minValue = 0

	# Stores prefix sum at each index
	sum = 0

	# Traverse over the array
	for i in range(len(nums)):
	
		# Update the prefix sum
		sum += nums[i]

		# Update the minValue
		minValue = min(minValue, sum)

	startValue = 1 - minValue
	
	# Return the positive start value
	return startValue

n = int(input())
x = [int(x) for x in input().split()]
print(minStartValue(x))
