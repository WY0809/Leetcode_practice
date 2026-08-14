class Solution:
    def findLengthOfLCIS(self, nums: List[int]) -> int:
        L = 0
        longest = 1

        for R in range(1, len(nums)):
            if nums[R] <= nums[R-1]:
                L = R
            longest = max(longest, R-L+1)
            
        return longest

# Synced seamlessly with LeetHub Pro
# Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
# Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna