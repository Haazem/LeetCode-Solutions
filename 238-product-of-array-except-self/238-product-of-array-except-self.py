class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
            left = 1
            ans = [1] * len(nums)

            for i in range(len(nums)):
                ans[i] = left
                left *= nums[i]

            right = 1
            for i in range(len(nums)-1 , -1 , -1):
                ans[i] *= right
                right *= nums[i]

            return ans 
