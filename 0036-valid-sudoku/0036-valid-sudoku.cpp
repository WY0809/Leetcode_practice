class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i = 0; i < 9; i++){
            unordered_set<char> row;
            unordered_set<char> col;
            unordered_set<char> square;
            for(int j = 0; j < 9; j++){
                if (board[i][j] != '.' && !row.insert(board[i][j]).second)
                    return false;

                if(board[j][i] != '.' && !col.insert(board[j][i]).second)
                    return false;

                int x = j/3 + i/3*3;
                int y = j%3 + i%3*3;
                if(board[x][y] != '.' && !square.insert(board[x][y]).second)
                    return false;
            }
        }
        return true;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna