class Solution:
    def searchMatrix(self, matrix: List[List[int]], target: int) -> bool:
        L = 0
        R = len(matrix) - 1

        while L <= R:
            Mid = (L + R) // 2

            if matrix[Mid][0] <= target <= matrix[Mid][-1]:
                l = 0
                r = len(matrix[Mid])-1

                while l <= r:
                    mid = (l + r) // 2
                    if matrix[Mid][mid] == target:
                        return True
                    elif target > matrix[Mid][mid] :
                        l = mid + 1
                    else:
                        r = mid - 1                    
                return False
            elif target > matrix[Mid][-1]:
                L = Mid + 1
            else:
                R = Mid - 1

        return False

# Synced seamlessly with LeetHub Pro
# Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
# Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna