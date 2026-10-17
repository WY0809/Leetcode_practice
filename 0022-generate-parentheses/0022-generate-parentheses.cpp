class Solution {
public:
    vector<string> ans;
    void dfs(int left, int right, string now){
        if (left == 0 && right == 0){
            ans.push_back(now);
            return;
        }
        
        if (left > 0){
            dfs(left - 1, right, now +'(');
        }

        if (right > left){
            dfs(left, right - 1, now +')');
        }
    }

    vector<string> generateParenthesis(int n) {
        dfs(n, n,"");
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna