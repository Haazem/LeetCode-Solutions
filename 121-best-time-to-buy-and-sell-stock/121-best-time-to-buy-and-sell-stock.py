class Solution:
    def maxProfit(self, prices: List[int]) -> int:
            if len(prices) < 2 :
                return 0
            res = 0
            l , r = 0, 1
            while l < r and r < len(prices):
                res = max(res, prices[r] - prices[l])
                if prices[r] - prices[l] <= 0 :
                    l += 1
                    if l == r :
                        r +=1
                else:
                    r +=1

            return res

