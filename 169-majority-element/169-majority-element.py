class Solution:
    def majorityElement(self, nums: List[int]) -> int:
            n = len(nums)
            m = n // 2 
            d = dict()
            for i in range(n):
                if nums[i] not in d :
                    d[nums[i]] = 1 
                else :
                    d[nums[i]] +=1

            for i , j in d.items():
                if j > m :
                    return i 
