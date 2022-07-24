class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        if len(prices) == 1 :
            return 0 
        
        b_price = prices[0] 
        s_price = 0  
        res = 0

        for i in range(1 , len(prices)):
            cur = prices[i] - b_price 
            if cur < 0 :
                b_price = prices[i]
            else :
                res = max(res , cur)
                s_price = max(prices[i] , s_price)

        return res 
        