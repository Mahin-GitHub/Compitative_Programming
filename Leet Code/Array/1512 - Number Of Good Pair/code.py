# Number of Good Pairs

nums = [1,2,3,1,1,3]

sum = 0

for i in range(len(nums)):
    count=0
    for j in range(i+1,len(nums)):
        if nums[i] == nums[j]:
            count = count+1
    sum = sum + count
print(sum)