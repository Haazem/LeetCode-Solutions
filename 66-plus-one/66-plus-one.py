class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        
        s = ''
        for i in digits:
            s += str(i)

        res1 = int(s) + 1 
        ans1 = []
        while res1 > 0 :
            ld = res1 % 10 
            res1 //= 10
            ans1.append(ld)

        return list(reversed( ans1))        
        
        