class Solution:
    def maxProduct(self, nums: List[int]) -> int:
        max_prod = nums[0]
        min_prod = nums[0]
        ans = nums[0]

        for i in range(1, len(nums)):
            prev_max = max_prod
            prev_min = min_prod

            max_prod = max(prev_max * nums[i], prev_min * nums[i], nums[i])
            min_prod = min(prev_max * nums[i], prev_min * nums[i], nums[i])
            ans = max(ans, max_prod)

        return ans

# Synced seamlessly with LeetHub Pro
# Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
# Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna