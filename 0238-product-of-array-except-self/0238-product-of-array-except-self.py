class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        n = len(nums)
        ans = [1] * n
        
        left = 1
        for i in range(n):
            ans[i] = left
            left *= nums[i]

        right = 1
        for i in range(n-1,-1,-1):
            ans[i] *= right
            right *= nums[i]
            
        return ans
   

# Synced seamlessly with LeetHub Pro
# Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
# Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna