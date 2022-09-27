class Solution:
    def isPalindrome(self, s: str) -> bool:
            s2 = ""
            for i in s :
                if i.isalnum():
                    s2 += i.lower()

            i = 0
            j = len(s2)-1
            while i < j :
                if s2[i] != s2[j]:
                    return False
                else:
                    i += 1
                    j -= 1

            return True
