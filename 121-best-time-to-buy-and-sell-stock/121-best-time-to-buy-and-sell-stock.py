class Solution:
    def maxProfit(self, prices: List[int]) -> int:
            left = 0 
            right = 1 
            max_profit = 0 

            while right < len(prices):
                curr = prices[right] - prices[left]
                if curr > 0 :
                    max_profit = max(max_profit , curr)
                else :
                    left = right 

                right +=1 

            return max_profit
        