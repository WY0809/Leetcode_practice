class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int ans = INT_MAX;
        int i = 0;
        int sum = 0;
        for(int j = 0; j < nums.size(); ++j){
            sum += nums[j];
            while(sum >= target){
                ans = ans < (j-i+1) ? ans : (j-i+1);
                sum -= nums[i];
                i++;
            }
        }
        return ans == INT_MAX ? 0 : ans;
    }
};
