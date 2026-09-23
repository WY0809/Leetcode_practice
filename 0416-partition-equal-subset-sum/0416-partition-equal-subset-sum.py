class Solution:
    def canPartition(self, nums: list[int]) -> bool:
        total = sum(nums)
        if total % 2:
            return False

        half = total // 2
        possible = {0}

        for i in nums:
            if (half - i) in possible:
                return True
                
            new_possible = possible.copy()

            for j in possible:
                new_possible.add(i+j)
            
            possible = new_possible
        return False

# Synced seamlessly with LeetHub Pro
# Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
# Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna