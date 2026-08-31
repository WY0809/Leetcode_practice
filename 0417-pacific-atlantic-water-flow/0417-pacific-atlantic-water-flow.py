class Solution:
    def pacificAtlantic(self, heights: List[List[int]]) -> List[List[int]]:
        pacific = set()
        atlantic = set()

        directions = [(1, 0), (-1, 0), (0, 1), (0, -1)]
        rows = len(heights)
        cols = len(heights[0])

        def dfs(i, j, visited):
            visited.add((i, j))

            for di, dj in directions:
                ni = i + di
                nj = j + dj

                if (
                    0 <= ni < rows
                    and 0 <= nj < cols
                    and (ni, nj) not in visited
                    and heights[ni][nj] >= heights[i][j]
                ):
                    dfs(ni, nj, visited)

        for i in range(rows):
            dfs(i, 0, pacific)
            dfs(i, cols - 1, atlantic)

        for j in range(cols):
            dfs(0, j, pacific)
            dfs(rows - 1, j, atlantic)

        return [[i, j] for i, j in pacific & atlantic]

# Synced seamlessly with LeetHub Pro
# Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
# Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna