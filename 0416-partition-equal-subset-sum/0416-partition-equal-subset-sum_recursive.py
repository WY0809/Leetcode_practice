from functools import cache

class Solution:
    def canPartition(self, nums: list[int]) -> bool:
        total = sum(nums)

        if total % 2:
            return False

        half = total // 2

        @cache
        def dfs(i, curr):
            if curr == half:
                return True

            if curr > half or i == len(nums):
                return False

            return (
                dfs(i + 1, curr) or
                dfs(i + 1, curr + nums[i])
            )

        return dfs(0, 0)

# Synced seamlessly with LeetHub Pro
# Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
# Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
