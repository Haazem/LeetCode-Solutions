class Solution:
    def maxNumberOfBalloons(self, text: str) -> int:
        
        res = len(text)
        s = "balloon"
        balloon_count = {}
        text_count = {}

        for i in text:
            text_count[i] = text_count.get(i, 0) + 1

        for i in s:
            balloon_count[i] = balloon_count.get(i, 0) + 1

        for i in s:
            if i not in text_count:
                return 0
            res = min(res, text_count[i] // balloon_count[i])

        return res
