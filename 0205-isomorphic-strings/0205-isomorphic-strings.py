class Solution:
    def isIsomorphic(self, s: str, t: str) -> bool:
            mapST, mapTS = {}, {}

            for e1, e2 in zip(s, t):

                if ((e1 in mapST and mapST[e1] != e2) or
                        (e2 in mapTS and mapTS[e2] != e1)):
                    return False
                mapST[e1] = e2
                mapTS[e2] = e1

            return True
