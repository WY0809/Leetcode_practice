class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);

        int product = 1;
        ans[0] = product;
        for(int i = 0; i<n-1; i++){
            product *= nums[i];
            ans[i+1] = product;
        }

        product = 1;
        ans[n-1] *= product;
        for(int i = n-1; i>0; i--){
            product *= nums[i];
            ans[i-1] *= product;
        }
        
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna