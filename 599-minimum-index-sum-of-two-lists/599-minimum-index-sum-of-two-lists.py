class Solution:
    def findRestaurant(self, list1: List[str], list2: List[str]) -> List[str]:
            d1 = dict()
            for i in range(len(list1)):
                d1[list1[i]] = i 

            l = []
            for i in range(len(list2)):
                l2 = []
                if list2[i] in d1 :
                    total = d1[list2[i]] + i
                    l2.append(total)
                    l2.append(list2[i])
                    l.append(l2)

            l.sort()
            mn = l[0][0]
            res = []
            for i in range(len(l)):
                if l[i][0] == mn :
                    res.append(l[i][1])
            return res 

        