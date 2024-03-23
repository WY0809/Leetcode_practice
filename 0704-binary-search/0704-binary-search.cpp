class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int i = n/2;
        int upper = n, lower = 0;
        while(n != 0){
            if(nums[i] == target){
                return i;
            }else if(nums[i] < target){
                lower = i;
                i = (i + upper) /2;
            }else if(nums[i] > target){
                upper = i;
                i = (i + lower) /2;
            }
            n /= 2;
        }
        return -1;
    }
};