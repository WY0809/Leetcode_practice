class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        nums = sorted(set(nums))
        count,ans = 1, 1

        for i in range(len(nums)-1):
            if nums[i]+1 == nums[i+1]:
                count += 1
            else:
                ans = max(ans,count)
                count = 1

        ans = max(ans,count)
        return ans if nums else 0


# Synced seamlessly with LeetHub Pro
# Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
# Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna