class Solution {
public:
    unordered_map <char, string> dict = {
            {'2', "abc"},
            {'3', "def"},
            {'4', "ghi"},
            {'5', "jkl"},
            {'6', "mno"},
            {'7', "pqrs"},
            {'8', "tuv"},
            {'9', "wxyz"}
    };
    vector<string> ans;

    void dfs(const string &digits, int index, string &path){
        if (index == digits.size()){
            ans.push_back(path);
            return ;
        }
        for (char i :dict[digits[index]]){
            path.push_back(i);
            dfs(digits, index+1, path);
            path.pop_back();
        }
    }

    vector<string> letterCombinations(string digits) {
        if (digits.empty())
            return {};

        string path;
        dfs(digits, 0, path);
        
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna