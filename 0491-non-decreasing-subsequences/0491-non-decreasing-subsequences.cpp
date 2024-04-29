class Solution {
public:
    vector<vector<int>> findSubsequences(vector<int>& nums) {
        vector<int>onesub;
        vector<vector<int>>res;
        helper(0,nums,onesub,res);
        return res;
    }
    void helper(int pos,const vector<int>&nums, vector<int>&onesub,
               vector<vector<int>>&res){
           if(pos>=nums.size()){
            if(onesub.size()>1){
                res.push_back(onesub);
            }
            return;
           }
           if(onesub.size()==0||nums[pos]>=onesub.back()){
            onesub.push_back(nums[pos]);
            helper(pos+1,nums,onesub,res);
            onesub.pop_back();
           }
           if(onesub.size()==0||nums[pos]!=onesub.back()){
            helper(pos+1,nums,onesub,res);
           }
    }
    
};