class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
            count = {}
            freq = [[] for i in range(len(nums) + 1)]

            for i in nums :
                count[i] = count.get(i , 0) + 1

            for i , j in count.items():
                freq[j].append(i)
            ans = []
            for i in range(len(freq)-1 ,-1 , -1):
                for j in freq[i]:
                    ans.append(j)
                    if len(ans) == k :
                        return ans
