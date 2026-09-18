class Solution:
    def uniquePaths(self, m: int, n: int) -> int:
        dp = [1] * n

        for i in range(1,m):
            for j in range(1,n):
                dp[j] = dp[j] + dp[j-1]

        return dp[n-1]

# Synced seamlessly with LeetHub Pro
# Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
# Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna