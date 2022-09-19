class Solution:
    from collections import defaultdict

    def twoSum(self, nums: List[int], target: int) -> List[int]:
            d = defaultdict(list)
            for i in range(len(nums)):
                d[nums[i]].append(i)
            nums.sort()
            i = 0
            j = len(nums)-1
            ans = []
            while i < j :
                sm = nums[i] + nums[j]
                if sm > target:
                    j -=1
                elif sm < target:
                    i+=1
                else:
                    ans.append(nums[i])
                    ans.append(nums[j])
                    break

            x = d[ans[0]][0]
            y = d[ans[1]][0]
            if x == y :
                y = d[ans[1]][1]
            return x , y

        