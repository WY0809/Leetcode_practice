class Solution:
    def subarraySum(self, nums: List[int], k: int) -> int:
        total = times = 0
        prefix_count = defaultdict(int)
        prefix_count[0] = 1

        for num in nums:
            total += num
            times += prefix_count[total - k]
            prefix_count[total] += 1
            
        return times

# Synced seamlessly with LeetHub Pro
# Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
# Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna