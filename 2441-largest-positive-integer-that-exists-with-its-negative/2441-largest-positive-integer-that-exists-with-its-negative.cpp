class Solution {
public:
    int findMaxK(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int i = 0 , j = nums.size()-1;
        while(nums[i] + nums[j] != 0){
            if(i >= j){
                return -1;
            }
            if(nums[i] + nums[j] < 0){
                i++;
            }else{
                j--;
            }
        }
        return nums[j];
    }
};