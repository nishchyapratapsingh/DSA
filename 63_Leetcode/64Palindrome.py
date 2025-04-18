class Solution:
    def isPalindrome(self, x: int) -> bool:
        if x < 0:
            return False
        
        digits = list(map(int, str(x)))
        n = len(digits)
        
        for i in range(n // 2):
            if digits[i] != digits[n - i - 1]:
                return False
        
        return True
