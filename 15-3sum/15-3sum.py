class Solution:
    def threeSum(self, nums: List[int]) -> List[List[int]]:
            nums.sort() 
            n = len(nums) 
            res = set()
            for i in range(n - 2):
                j  , k = i + 1 , n - 1

                while j < k :
                    a,b,c = nums[i] , nums[j] ,nums[k] 
                    if a+b+c==0:
                        k-=1 
                        j+=1 
                        ans = (a,b,c) 

                        res.add(ans) 
                    elif a+b+c>0:
                        k -=1 
                    else :
                        j += 1 

            return res
