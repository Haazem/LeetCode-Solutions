class Solution:
    def isPalindrome(self, s: str) -> bool:
            i = 0
            j = len(s) - 1
            while i < j:
                while True and i < len(s):
                    if ((48 <= ord(s[i]) <= 57) or
                            (65 <= ord(s[i]) <= 90) or
                            (97 <= ord(s[i]) <= 122)):
                        break
                    else:
                        i += 1
                while True and i < j:
                    if ((48 <= ord(s[j]) <= 57) or
                            (65 <= ord(s[j]) <= 90) or
                            (97 <= ord(s[j]) <= 122)):
                        break
                    else:
                        j -= 1

                if i < len(s) and i <= j and j >= 0:
                    if s[i].lower() != s[j].lower():
                        return False
                    else:
                        i += 1
                        j -= 1
                else:
                    return True

            return True
