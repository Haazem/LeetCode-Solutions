class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
            s = list(sorted(s))
            t = list(sorted(t))
            return s == t
