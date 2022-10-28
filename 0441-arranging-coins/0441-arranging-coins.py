class Solution:
    def arrangeCoins(self, n: int) -> int:
            l, r = 0, n
            res = 1

            while l <= r:
                mid = (l + r) // 2
                coins = (mid*(mid+1))//2

                if coins > n :
                    r = mid - 1
                else:
                    res = max(res, mid)
                    l = mid + 1

            return res
