class Solution:
    def searchMatrix(self, matrix: List[List[int]], target: int) -> bool:
        top = 0
        bottom = len(matrix) - 1

        while top <= bottom:
            row = (top + bottom) // 2

            if matrix[row][0] <= target <= matrix[row][-1]:
                L = 0
                R = len(matrix[row]) - 1

                while L <= R:
                    mid = (L + R) // 2

                    if matrix[row][mid] == target:
                        return True
                    elif matrix[row][mid] < target:
                        L = mid + 1
                    else:
                        R = mid - 1

                return False

            elif target > matrix[row][-1]:
                top = row + 1
            else:
                bottom = row - 1

        return False

# Synced seamlessly with LeetHub Pro
# Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
# Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna