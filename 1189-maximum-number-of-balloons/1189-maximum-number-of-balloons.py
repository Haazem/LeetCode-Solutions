class Solution:
    def maxNumberOfBalloons(self, text: str) -> int:
            textCounter = Counter(text)
            balloon = Counter("balloon")

            res = len(text)

            for key in balloon:
                res = min(res, textCounter[key] // balloon[key])

            return res

