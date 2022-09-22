class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
            count = {}
            for i in nums:
                if count.get(i) == None:
                    count[i] = 1
                else :
                    count[i] +=1

            l = []
            for i in count :
                t = [i , count[i]]
                l.append(t)
            l.sort(reverse= True , key= lambda x : x[1])

            ans = []
            for i in range(k):
                ans.append(l[i][0])
            return ans
