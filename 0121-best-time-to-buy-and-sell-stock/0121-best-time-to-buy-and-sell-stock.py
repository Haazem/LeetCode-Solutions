class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        
            max_profit = 0
            l, r = 0 , 1

            while len(prices) > r > l:
                max_profit = max(max_profit, prices[r]-prices[l])

                if prices[r] - prices[l] <= 0:
                    l += 1
                    if l == r :
                        r +=1
                else:
                    r +=1

            return max_profit
