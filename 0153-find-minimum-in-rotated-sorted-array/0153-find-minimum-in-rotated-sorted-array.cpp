class Solution {
public:
    int findMin(vector<int>& nums) {
        int L = 0;
        int R = nums.size()-1;
       
        while(L < R){
            int mid = L + (R - L)/2;
            
            if (nums[mid] < nums[R])
                R = mid;
            else
                L = mid + 1;
            
        }

        return nums[L];
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna