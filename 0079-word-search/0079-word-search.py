class Solution:
    def exist(self, board: List[List[str]], word: str) -> bool:
        directions = [[1,0], [-1,0], [0,1], [0,-1]]
        rows = len(board)
        cols = len(board[0])

        def dfs(i, j, index):
            if i < 0 or i >= rows or j < 0 or j >= cols or board[i][j] != word[index]:
                return False

            if index == len(word)-1:
                return True

            temp = board[i][j]
            board[i][j] = "#"

            for dx, dy in directions:
                if dfs(i + dx, j + dy, index+1):
                    board[i][j] = temp
                    return True

            board[i][j] = temp
            return False

        for i in range(rows):
            for j in range(cols):
                if dfs(i,j,0):
                    return True

        return False

# Synced seamlessly with LeetHub Pro
# Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
# Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna