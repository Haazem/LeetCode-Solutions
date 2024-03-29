class Solution:
    def threeSum(self, nums: List[int]) -> List[List[int]]:
            nums.sort()
            ans = []
            for i, val in enumerate(nums):
                if i > 0 and nums[i] == nums[i-1]:
                    continue

                l, r = i+1 , len(nums)-1
                while l < r:
                    target = val + nums[l] + nums[r]
                    if target > 0:
                        r -= 1
                    elif target < 0:
                        l += 1
                    else:
                        ans.append([val , nums[l] , nums[r]])
                        l += 1
                        while l < r and nums[l] == nums[l-1]:
                            l += 1

            return ans
