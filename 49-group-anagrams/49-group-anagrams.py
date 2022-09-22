class Solution:
    from collections import defaultdict

    def groupAnagrams(self, l: List[str]) -> List[List[str]]:
            count = defaultdict(list)
            ans = []
            for i in l:
                s = list(sorted(i))
                count[tuple(s)].append(i)

            for i in count :
                ans.append(count[i])
            return ans
