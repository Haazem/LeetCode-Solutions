class Solution:
    def threeSum(self, nums: List[int]) -> List[List[int]]:
            nums.sort()
            l = []
            n = len(nums)
            for i in range(n):

                j = i + 1 
                k = n - 1

                while j < k :
                    temp = nums[i] + nums[j] + nums[k]
                    if temp > 0 :
                        k -= 1 
                    elif temp < 0 :
                        j += 1
                    else :
                        l2 = []
                        l2.append(nums[i])
                        l2.append(nums[j])
                        l2.append(nums[k])

                        if l2 not in l :
                            l.append(l2)
                            j+=1
                            k-=1
                        else :
                            j+=1
                            k-=1

            return l 
        