/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool dfs(TreeNode* node, long long upper, long long lower){
        if(!node)
            return true;

        if (node->val <= lower || node->val >= upper)
            return false;

        if(!dfs(node->left, node->val, lower))
            return false;

        return dfs(node->right, upper, node->val);
    }

    bool isValidBST(TreeNode* root) {
        return dfs(root, LLONG_MAX, LLONG_MIN);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna