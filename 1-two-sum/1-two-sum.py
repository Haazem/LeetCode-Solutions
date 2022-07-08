class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
                d = {}
                for idx , num in enumerate(nums):
                    need = target - num
                    if need in d :
                        return [d[need] , idx ]
                    else :
                        d[num] = idx 

                return []


        