class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> temp;
        int length = nums.size();
        k = k % length;
        int j = 0;
        // int temp = nums[length - 1];
        for(int i = length - 1 ; i >= 0 ; i--){
            if(i >= k){
                temp.push_back(nums[i]);
                nums[i] = nums[i-k];
            }else if(!temp.empty()){
                nums[i] = temp[j];
                j++;
            }
        }
    }
};