class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
            ans = defaultdict(list)
            for s in strs :
                temp = list(sorted(s))
                ans[tuple(temp)].append(s)
            return  ans.values()