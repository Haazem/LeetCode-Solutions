class Solution:
    def generate(self, numRows: int) -> List[List[int]]:
            if numRows == 1 :
                return [[1]]

            ans = [[1]]    
            l = [1 , 1]
            ans.append(l)
            for i in range(numRows - 2):
                t = [1]
                for j in range(len(l) - 1):
                    t.append(l[j] + l[j + 1])
                t.append(1)
                l = t
                ans.append(l) 

            return ans  
