class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        pre = - 1E5
        result = - 1E5
        for i in range(len(nums)):
            pre = nums[i] if pre + nums[i] <= nums[i] else pre + nums[i]
            result = pre if pre > result else result
        return result