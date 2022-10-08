class Solution:
    def maxArea(self, height: List[int]) -> int:

        i = 0
        j = len(height)-1
        ans = 0
        while i < j:
            mn = min(height[i], height[j])
            w = j - i
            temp = mn * w
            ans = max(ans, temp)
            if height[i] <= height[j]:
                i += 1
            else:
                j -= 1
        return ans