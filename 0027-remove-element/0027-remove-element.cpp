class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int>::iterator it = nums.begin();
        int k = 0;
        // nums.erase(it+1);
        // nums.erase(it+2);
        for(int i = nums.size()-1; i > -1; --i){
            if(nums[i] == val){
                cout<<i<<endl;
                nums.erase(it+i);
            }else{
                k++;
            }
        }
        return k;
    }
};