class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        profit = 0
        lowest = float("inf")

        for price in prices:
            lowest = min(lowest, price)
            profit = max(profit, price - lowest)

        return profit

# Synced seamlessly with LeetHub Pro
# Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
# Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna