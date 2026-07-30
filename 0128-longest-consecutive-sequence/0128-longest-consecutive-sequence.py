class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        if not nums:
            return 0

        nums = sorted(set(nums))
        count = longest = 1

        for i in range(1, len(nums)):
            if nums[i] == nums[i - 1] + 1:
                count += 1
            else:
                longest = max(longest, count)
                count = 1

        return max(longest, count)

# Synced seamlessly with LeetHub Pro
# Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
# Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna