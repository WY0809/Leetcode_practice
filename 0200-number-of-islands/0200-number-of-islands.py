class Solution:
    def numIslands(self, grid: List[List[str]]) -> int:
        rows = len(grid)
        cols = len(grid[0])

        def visit(i, j):
            if i < 0 or i >= rows or j < 0 or j >= cols or grid[i][j] != "1":
                return

            grid[i][j] = "0"

            visit(i + 1, j)
            visit(i - 1, j)
            visit(i, j + 1)
            visit(i, j - 1)

        islands = 0

        for i in range(rows):
            for j in range(cols):
                if grid[i][j] == "1":
                    islands += 1
                    visit(i, j)

        return islands

# Synced seamlessly with LeetHub Pro
# Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
# Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna