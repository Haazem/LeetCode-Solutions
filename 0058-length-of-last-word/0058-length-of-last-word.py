class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        
        l = s.split(" ")
        for i in range(len(l) - 1, -1, -1):
            if len(l[i]) == 0:
                continue
            else:
                return len(l[i])
