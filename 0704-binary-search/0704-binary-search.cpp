class Solution {
public:
    int search(vector<int>& nums, int target) {
        int i = 0;
        int R = nums.size()-1, L = 0;
        while(L <= R){
            i = (L + R) / 2;
            if(nums[i] == target){
                return i;
            }
            
            if(nums[i] < target){
                L = i + 1;
            }else if(nums[i] > target){
                R = i - 1;
            }
        }
        return -1;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna