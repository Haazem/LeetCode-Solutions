class Solution:
    def removeElement(self, nums: List[int], val: int) -> int:
        n = len(nums)
        for i in range(n):
            if nums[i] == val:
                nums[i] = 1000

        nums.sort()
        k = 0 
        for i in range(n):
            if nums[i] != 1000:
                k+=1

        return k 


        