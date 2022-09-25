class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
            ans = [0]*len(nums)
            prefix = [0]*len(nums)
            prefix[0] = nums[0]
            postfix = [0]*len(nums)
            postfix[len(nums)-1] = nums[len(nums)-1]

            for i in range(1 , len(nums)):
                prefix[i] = prefix[i-1] * nums[i]

            for i in range(len(nums)-2 ,-1 , -1):
                postfix[i] = postfix[i+1] * nums[i]

            for i in range(len(nums)):
                if i == 0 :
                    ans[i] = postfix[i+1]
                elif i == (len(nums)-1):
                    ans[i] = prefix[i-1]
                else:
                    ans[i] = prefix[i-1] * postfix[i+1]

            return ans
