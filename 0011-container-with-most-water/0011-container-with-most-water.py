class Solution:
    def maxArea(self, height: List[int]) -> int:
        left, right = 0, len(height)-1
        container = 0
        while left < right:
            current = (right - left) * min(height[left], height[right])

            if current > container:
                container = current

            if height[left] > height[right]:
                right -= 1
            else:
                left += 1
        
        print(container)
        return container