class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
            HashMap = {}

            for i , j in enumerate(nums):
                diff = target - j
                if diff in HashMap:
                    return [HashMap[diff], i]
                HashMap[j] = i
