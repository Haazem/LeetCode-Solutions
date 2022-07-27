class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
            n = len(nums)
            m = len(set(nums))
            return n > m
        