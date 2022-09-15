class Solution:
    def combinationSum2(self, nums: List[int], target: int) -> List[List[int]]:
            res = []
            nums.sort()

            def backtrack(i , cur , total):
                if total == target:
                    res.append(cur.copy())
                    return
                if i >= len(nums) or total > target:
                    return

                cur.append(nums[i])
                backtrack(i +1 , cur , total + nums[i])
                cur.pop()

                while i+1 < len(nums) and nums[i] == nums[i+1]:
                    i += 1

                backtrack(i+1 , cur , total)
            backtrack(0 , [] , 0)
            return res

        