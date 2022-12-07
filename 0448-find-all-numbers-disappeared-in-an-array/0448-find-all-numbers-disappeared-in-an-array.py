class Solution:
    def findDisappearedNumbers(self, nums: List[int]) -> List[int]:
            ans = []

            for n in nums:

                i = abs(n) - 1
                nums[i] = -1 * abs(nums[i])


            for i in range(len(nums)):
                if nums[i] > 0:
                    ans.append(i + 1)


            return ans
