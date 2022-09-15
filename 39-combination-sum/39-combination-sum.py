class Solution:
    def combinationSum(self, nums: List[int], target: int) -> List[List[int]]:
            res = []
            def dfs(index , temp , total):
                #base case
                if total == target:
                    res.append(temp.copy())
                    return
                if index >= len(nums) or total > target:
                    return

                temp.append(nums[index])
                dfs(index ,temp ,  total + nums[index])
                temp.pop()
                dfs(index+1 ,temp ,  total)

            dfs(0 ,[], 0)

            return res
