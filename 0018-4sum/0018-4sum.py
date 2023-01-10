class Solution:
    def fourSum(self, nums: List[int], target: int) -> List[List[int]]:
            ans = set()
            if len(nums) < 4:
                return ans

            nums.sort()
            for i in range(len(nums)):
                for j in range(i+1, len(nums)):
                    l, r = j+1, len(nums) - 1
                    while l < r:
                        sm = nums[i]+nums[j]+nums[l]+nums[r]
                        if sm == target:
                            ans.add((nums[i], nums[j], nums[l], nums[r]))
                            l += 1

                        elif sm > target:
                            r -= 1
                        else:
                            l += 1

            return ans
