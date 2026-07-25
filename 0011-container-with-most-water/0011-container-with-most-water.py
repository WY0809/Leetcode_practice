class Solution:
    def maxArea(self, height: List[int]) -> int:
        L, R = 0, len(height)-1
        area = 0

        while L < R:
            area = max(area, (R-L)*min(height[L], height[R]))
            
            if height[L] < height[R]:
                L += 1
            else:
                R -= 1
        return area


# Synced seamlessly with LeetHub Pro
# Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
# Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna