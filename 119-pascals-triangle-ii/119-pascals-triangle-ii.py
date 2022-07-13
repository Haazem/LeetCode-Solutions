class Solution:
    def getRow(self, rowIndex: int) -> List[int]:
        if rowIndex == 0 :
            return [1]
    
        temp = rowIndex + 1
        ans = [[1]]    
        l = [1 , 1]
        ans.append(l)
        for i in range(temp - 2):
            t = [1]
            for j in range(len(l) - 1):
                t.append(l[j] + l[j + 1])
            t.append(1)
            l = t
            ans.append(l) 

        return ans[rowIndex]

        