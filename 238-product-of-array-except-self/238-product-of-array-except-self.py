class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
            ans = [0]*len(nums)
            mul = 1
            c = 0
            for i in nums :
                if i == 0:
                    c+=1
                else:
                    mul *= i
            if c > 1 :
                return ans
            elif c == 1 :
                for i in range(len(nums)):
                    if nums[i] == 0:
                        ans[i] = mul
                        break
            else:
                for i in range(len(nums)):
                    ans[i] = mul // nums[i]

            return ans

        