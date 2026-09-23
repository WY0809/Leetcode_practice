class Solution:
    def canPartition(self, nums: list[int]) -> bool:
        total = sum(nums)

        if total % 2:
            return False

        half = total // 2
        possible = {0}

        for num in nums:
            if half - num in possible:
                return True

            new_possible = possible.copy()

            for s in possible:
                new_possible.add(s + num)

            possible = new_possible

        return False

# Synced seamlessly with LeetHub Pro
# Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
# Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna