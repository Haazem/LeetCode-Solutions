class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        prev = 1000
        for i in range(len(nums)):
            if prev == 1000 :
                prev = nums[i]

            else :
                if nums[i] == prev:
                    nums[i] = 500

                else :
                    prev = nums[i]

        nums.sort()            
        k = 0 
        for i in range(len(nums)):
            if nums[i] != 500:
                k+=1
        #print(nums)
        return k

        