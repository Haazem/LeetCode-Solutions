class Solution:
    def arrangeCoins(self, n: int) -> int:
            l , r = 1 , n+1
            while l <= r :
                mid = (l + r) // 2
                k = (mid *(mid+1)) // 2

                if k <= n :
                    l = mid + 1

                else:
                    r = mid - 1

            return r
