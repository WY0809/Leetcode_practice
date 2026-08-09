class Solution:
    def characterReplacement(self, s: str, k: int) -> int:
        L = 0
        count = Counter()
        longest = 0

        for R in range(len(s)):
            count[s[R]] += 1

            while (R - L + 1) - max(count.values()) > k:
                count[s[L]] -= 1
                L += 1

            longest = max(longest, R - L + 1)

        return longest

# Synced seamlessly with LeetHub Pro
# Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
# Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna