class Solution:
    def evalRPN(self, tokens: List[str]) -> int:
            s = []

            for i in tokens :
                if i in ['*' , '+' , '-' , '/']:
                    x = s.pop()
                    y = s.pop()

                    if i == '*':
                        k = x * y 

                    if i == '+':
                        k = x + y 

                    if i == '-':
                        k = y - x 

                    if i == '/':
                        k = y / x 

                    s.append(int(k)) 

                else :
                    s.append(int(i))

            res = s.pop()
            return res 

        