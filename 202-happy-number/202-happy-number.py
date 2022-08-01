class Solution:
    def isHappy(self, n: int) -> bool:
            s = 0
            res = [] 
            while True:
                if s in res :
                    return False
                res.append(n)
                s = 0  
                for j in str(n):
                    s += (int(j) ** 2 )
                if s == 1 :
                    return True 
                n = s 

        