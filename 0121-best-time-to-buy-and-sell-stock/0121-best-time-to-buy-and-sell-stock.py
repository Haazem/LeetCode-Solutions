class Solution:
    def maxProfit(self, prices: List[int]) -> int:
            max_res = 0

            l,r = 0,1
            while l < r < len(prices):
                if prices[r] > prices[l]:
                    max_res = max(max_res, prices[r] - prices[l])
                    r += 1
                else:
                    l = r
                    r += 1

            return max_res
