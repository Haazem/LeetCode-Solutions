class Solution:
    def numSubarrayProductLessThanK(self, nums: List[int], k: int) -> int:
            if k <= 1 :
                 return 0
            ans = 0
            mul = 1
            l  ,r = 0 , 0
            while r < len(nums):
                mul *= nums[r]
                while mul >= k :
                    mul /= nums[l]
                    l+=1
                ans += r - l + 1
                r += 1
            return  ans
