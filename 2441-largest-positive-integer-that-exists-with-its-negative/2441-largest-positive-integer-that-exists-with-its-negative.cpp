class Solution {
public:
    int findMaxK(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int i = 0 , j = nums.size()-1;
        while(nums[i] * -1 != nums[j]){
            if(i >= j){
                return -1;
            }
            if(nums[i] * -1 >= nums[j]){
                i++;
            }else{
                j--;
            }
        }
        return nums[j];
    }
};