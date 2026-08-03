class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        L = 0
        window = set()
        longest = 0

        for R in range(len(s)):
            while s[R] in window:
                window.remove(s[L])
                L += 1

            window.add(s[R])
            longest = max(longest, R - L + 1)

        return longest

# Synced seamlessly with LeetHub Pro
# Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
# Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna