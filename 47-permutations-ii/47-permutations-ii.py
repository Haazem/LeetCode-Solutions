class Solution:
    def permuteUnique(self, nums: List[int]) -> List[List[int]]:
        
            perm = []
            res = []
            count = {i: 0 for i in nums}
            for i in nums:
                count[i] +=1

            def dfs():
                #base case
                if len(perm) == len(nums):
                    res.append(perm.copy())
                    return

                for i in count :
                    if count[i] > 0 :
                        perm.append(i)
                        count[i] -= 1
                        dfs()
                        count[i] +=1
                        perm.pop()
            dfs()
            return res

        