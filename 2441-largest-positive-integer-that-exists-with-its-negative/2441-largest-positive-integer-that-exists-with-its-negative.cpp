class Solution {
public:
    int findMaxK(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int i = 0 , j = nums.size()-1;
        while(-nums[i] != nums[j]){
            if(i >= j){
                return -1;
            }
            if(-nums[i] >= nums[j]){
                i++;
            }else{
                j--;
            }
        }
        return nums[j];
    }
};