class Solution:
    def twoSum(self, numbers: List[int], target: int) -> List[int]:
            l, r = 0, len(numbers) - 1
            while l < r :
                t_sum = numbers[l] + numbers[r]

                if t_sum == target:
                    return [l+1, r+1]
                elif t_sum > target:
                    r -= 1
                else:
                    l+=1
