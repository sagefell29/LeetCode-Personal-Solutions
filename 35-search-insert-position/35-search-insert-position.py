class Solution:
    def searchInsert(self, nums: List[int], target: int) -> int:
        if target in nums: return nums.index(target)
        elif nums[-1]<target: return len(nums)
        else: 
            for i in range(len(nums)): 
                if target<nums[i]: 
                    return i