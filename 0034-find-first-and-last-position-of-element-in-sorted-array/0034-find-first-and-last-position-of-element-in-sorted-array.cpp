class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int start = -1;
        int end = -1;
        int L = 0;
        int R = nums.size()-1;
        while(L <= R){
            int mid = L + (R-L)/2;

            if (nums[mid] == target){
                start = mid;
                R = mid - 1;
            }
            else if (nums[mid] > target){
                R = mid - 1;
            }else{
                L = mid + 1;
            }
        }

        L = 0;
        R = nums.size()-1;
        while(L <= R){
            int mid = L + (R-L)/2;

            if (nums[mid] == target){
                end = mid;
                L = mid + 1;
            }
            else if (nums[mid] > target){
                R = mid - 1;
            }else{
                L = mid + 1;
            }
        }

        return {start, end};
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna