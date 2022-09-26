class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
            if len(nums) == 0:
                return 0

            nums = set(nums)
            nums = list(nums)
            nums.sort()

            ans = 0
            cnt = 0
            for i in range(len(nums)-1):
                if nums[i]+1 == nums[i+1]:
                    cnt += 1
                else:
                    ans = max(ans ,cnt)
                    cnt = 0

            ans = max(ans , cnt)
            return ans + 1
