class Solution:
    def minSubArrayLen(self, target: int, nums: List[int]) -> int:
        L = 0
        total = 0
        ans = float("inf")

        for R in range(len(nums)):
            total += nums[R]

            while total >= target:
                ans = min(ans, R - L + 1)
                total -= nums[L]
                L += 1

        return 0 if ans == float("inf") else ans

# Synced seamlessly with LeetHub Pro
# Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
# Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna