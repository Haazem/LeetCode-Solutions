class Solution:
    
    def doBSearch(self , nums, target, left):
        l, r = 0, len(nums)-1
        ans = -1

        while l <= r:
            mid = (l + r) // 2
            if nums[mid] > target:
                r = mid - 1
            elif nums[mid] < target:
                l = mid + 1
            else:
                ans = mid
                if left:
                    r = mid - 1
                else:
                    l = mid + 1
        return ans

    
    def searchRange(self, nums: List[int], target: int) -> List[int]:
            res1 = self.doBSearch(nums , target , True)
            res2 = self.doBSearch(nums , target , False)

            return res1, res2
