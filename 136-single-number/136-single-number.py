class Solution:
    def singleNumber(self, nums: List[int]) -> int:
            if len(nums) == 1 :
                   return nums[0]

            nums.sort()
            res = 0 
            for i in range(len(nums)):
                if i == 0 :
                    if nums[i] != nums[i + 1]:
                        res = nums[i]
                        break 
                elif i == len(nums) - 1 :
                    if nums[i] != nums[i - 1]:
                        res = nums[i]
                        break 
                else :
                    if nums[i] != nums[i - 1] and nums[i] != nums[i+1]:
                        res = nums[i]
                        break 

            return res 
