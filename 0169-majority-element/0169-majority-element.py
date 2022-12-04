class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        
        count = 1
        res = nums[0]

        for i in range(1, len(nums)):
            if nums[i] == res:
                count += 1

            else:
                count -= 1
                if count <= 0:
                    res = nums[i]
                    count = 1

        return res
