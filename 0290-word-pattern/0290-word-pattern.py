class Solution:
    def wordPattern(self, pattern: str, s: str) -> bool:
            words = s.split(" ")

            if len(words) != len(pattern):
                return False

            d1 = {}
            d2 = {}
            k1, k2 = 'a', 'a'


            for i in range(len(words)):
                if words[i] not in d1:
                    d1[words[i]] = k1
                    k1 = chr(ord(k1) + 1)
                if pattern[i] not in d2:
                    d2[pattern[i]] = k2
                    k2 = chr(ord(k2) + 1)

            for i in range(len(words)):
                if d1[words[i]] != d2[pattern[i]]:
                    return False

            return True
