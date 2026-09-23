class Solution:
    def canPartition(self, nums: list[int]) -> bool:
        total = sum(nums)

        if total % 2:
            return False

        half = total // 2
        dp = [False] * (half + 1)
        dp[0] = True

        for num in nums:
            for s in range(half, num-1, -1):
                dp[s] = dp[s] or dp[s-num]

        return dp[half]

# Synced seamlessly with LeetHub Pro
# Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
# Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
