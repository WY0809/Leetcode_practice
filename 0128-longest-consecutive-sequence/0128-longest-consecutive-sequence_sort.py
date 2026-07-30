class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        if not nums:
            return 0

        nums = sorted(set(nums))
        count = ans = 1

        for i in range(len(nums) - 1):
            if nums[i] + 1 == nums[i + 1]:
                count += 1
            else:
                ans = max(ans, count)
                count = 1

        return max(ans, count)

# Synced seamlessly with LeetHub Pro
# Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
# Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
