class Solution:
    def sortedSquares(self, nums: List[int]) -> List[int]:
        
        res = []
        for i in nums:
            res.append(pow(i , 2))
        res.sort()
        return res
