class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int length = nums.size();
        vector<int> temp(length);
        while(k > 0)
        {
            for(int i = 0; i < length ; i++)
            {
                if(i==0)
                {
                    temp[i] = nums[length - 1];
                }
                else
                {
                    temp[i] = nums[i-1];
                }
            }
            k--; 
            nums = temp;
        }
    }
};