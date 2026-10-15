class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int top = 0;
        int bottom = matrix.size() - 1;
        int left = 0;
        int right = matrix[0].size() - 1;

        while(top <= bottom && left <= right){
            for(int j = left; j <= right; j++)
                ans.push_back(matrix[top][j]);
            top++;

            if(top > bottom)
                break;

            for(int i = top; i <= bottom; i++)
                ans.push_back(matrix[i][right]);
            right--;

            if(left > right)
                break;
            
            for(int j = right; j >= left; j--)
                ans.push_back(matrix[bottom][j]);
            bottom--;

            if(top > bottom)
                break;

            for(int i = bottom; i >= top; i--)
                ans.push_back(matrix[i][left]);
            left++;
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna