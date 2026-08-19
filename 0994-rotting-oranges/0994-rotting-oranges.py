class Solution:
    def orangesRotting(self, grid: List[List[int]]) -> int:
        rows = len(grid)
        cols = len(grid[0])
        minute = 0
        queue = deque()
        fresh = 0

        for i in range(rows):
            for j in range(cols):
                if grid[i][j] == 2:
                    queue.append((i,j))
                elif grid[i][j] == 1:
                    fresh += 1

        while queue and fresh:
            level_size = len(queue)
            print(grid)
            for _ in range(level_size):
                i, j = queue.popleft()
                
                if i > 0 and grid[i-1][j] == 1:
                    grid[i-1][j] = 2
                    fresh -= 1
                    queue.append((i-1, j))
                if i < rows-1 and grid[i+1][j] == 1:
                    grid[i+1][j] = 2
                    fresh -= 1
                    queue.append((i+1, j))
                if j > 0 and grid[i][j-1] == 1:
                    grid[i][j-1] = 2
                    fresh -= 1
                    queue.append((i, j-1))   
                if j < cols-1 and grid[i][j+1] == 1:
                    grid[i][j+1] = 2
                    fresh -= 1
                    queue.append((i, j+1)) 

            minute += 1
        
        return -1 if fresh else minute

# Synced seamlessly with LeetHub Pro
# Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
# Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna