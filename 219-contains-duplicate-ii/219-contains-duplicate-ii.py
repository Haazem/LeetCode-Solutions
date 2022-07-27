class Solution:
    def containsNearbyDuplicate(self, nums: List[int], k: int) -> bool:
                d = {}
                count = 0
                ok = False   
                for i in nums :
                    if i in d :
                        indx = d.get(i)
                        if abs(indx - count) <= k :
                            ok = True
                            break 
                        else :
                            d[i] = count  

                    else :
                        d[i] = count 

                    count +=1
                return ok 
