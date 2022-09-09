class Solution:
    def minSubArrayLen(self, t: int, v: List[int]) -> int:
            if sum(v) < t :
                return 0
            l , r = 0 , 1
            sm = v[0]
            ans = len(v)
            if sm >= t:
                return 1
            while l <= r and r < len(v) and ans !=1:
                sm += v[r]
                while sm >= t:
                    ans = min(ans , r - l + 1)
                    if ans == 1 :break
                    sm -= v[l]
                    l +=1
                r +=1

            return ans