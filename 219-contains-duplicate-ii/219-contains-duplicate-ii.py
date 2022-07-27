class Solution:
    def containsNearbyDuplicate(self, nums: List[int], k: int) -> bool:
                d = defaultdict(list)
                n = len(nums)
                ok = False
                for i in range(n):
                    d[nums[i]].append(i)

                l1 = []
                for i , j in d.items():
                    if len(j) > 1 :
                        l1.append(j)

                for i in range(len(l1)):
                    if ok == False :
                        for j in range(len(l1[i])):
                            if ok == False:
                                for m in range(j + 1 , len(l1[i])):
                                    if abs(l1[i][j] - l1[i][m]) <= k :
                                        ok = True
                                        break  

                return ok       
