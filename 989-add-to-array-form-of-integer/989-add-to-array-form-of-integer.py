class Solution:
    def addToArrayForm(self, num: List[int], k: int) -> List[int]:
            s = ''
            for i in num:
                s += str(i)

            x = int(s)
            x += k
            ans = []
            while x:
                ans.append(x % 10)
                x //= 10
            ans.reverse()
            return ans
