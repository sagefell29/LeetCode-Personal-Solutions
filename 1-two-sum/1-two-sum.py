class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        l=len(nums)
        for i in range(l):
            for j in range(i,l):
                if nums[i]+nums[j]==target:
                    if i!=j:
                        return i,j