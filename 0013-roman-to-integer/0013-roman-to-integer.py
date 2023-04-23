class Solution:
    def romanToInt(self, s: str) -> int:
        roman_to_int = {
            'I': 1,
            'V': 5,
            'X': 10,
            'L': 50,
            'C': 100,
            'D': 500,
            'M': 1000
        }
        total = 0
        prev = 0
        for c in s:
            val = roman_to_int[c]
            total += val
            if val > prev:
                total -= 2 * prev
            prev = val
        return total