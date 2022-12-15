class Solution:
    def validPalindrome(self, s: str) -> bool:
        
        l, r = 0, len(s)-1
        while l < r:
            if s[l] != s[r]:
                s1, s2 = s[l+1: r+1], s[l:r] # skip left or right
                print(s1)
                print(s2)
                return (s1 == s1[::-1]) or (s2 == s2[::-1])
            l, r = l+1, r-1

        return True
