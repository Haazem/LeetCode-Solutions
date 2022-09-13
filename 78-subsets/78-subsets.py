class Solution:
    def subsets(self, nums: List[int]) -> List[List[int]]:
            res = []
            subset = []
            def dfs(index):
                if index >= len(nums):
                    res.append(subset.copy())
                    return

                subset.append(nums[index])
                dfs(index + 1)
                subset.pop()
                dfs(index + 1)

            dfs(0)
            return res

        