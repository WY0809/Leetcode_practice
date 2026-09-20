class Solution:
    def longestPalindrome(self, s: str) -> str:
        def expand(L,R):
            while L >= 0 and R < len(s) and s[L] == s[R]:
                L -= 1
                R += 1

            return L+1, R-1

        start = 0
        longest = 1

        for i in range(len(s)):
            L, R = expand(i,i)
            if R - L + 1 > longest:
                start = L
                longest = R - L + 1

            L, R = expand(i,i+1) 
            if R - L + 1 > longest:
                start = L
                longest = R - L + 1

        return s[start: start+longest]
            

# Synced seamlessly with LeetHub Pro
# Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
# Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna