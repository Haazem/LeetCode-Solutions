class Solution:
    def isValid(self, s: str) -> bool:
            # create stack
            l = []
            for i in s :
                if i in ['(', '[', '{']:
                    l.append(i)
                else:
                    if len(l) == 0:
                        return False
                    else:
                        if (i == ')' and l[-1] == '(' or
                           i == ']' and l[-1] == '[' or
                           i == '}' and l[-1] == '{'):
                            l.pop()
                        else:
                            return False
            if len(l) == 0:
                return True
            else:
                return False
