class Solution {
public:
    vector<vector<int>> sub(vector<int> &nums, int i, vector<int> &pre){
        vector<vector<int>> b;    
        for(int j = i+1 ; j < nums.size() ; j++){    
            if(i != nums.size()-1 && pre[pre.size()-1] <= nums[j]){
                pre.push_back(nums[j]);
                b.push_back(pre);
                vector<vector<int>> temp = sub(nums , j , pre);
                b.insert(b.end(),temp.begin(),temp.end());
                pre.pop_back();
            }
        }
        return b;
    }
    vector<vector<int>> findSubsequences(vector<int>& nums) {
        vector<vector<int>> ans;
        for(int i = 0 ; i < nums.size() ; i++){
            vector<int> temp = {nums[i]};
            vector<vector<int>> a = sub(nums, i, temp);
            for(int j = 0 ; j < a.size() ; j++){
                auto it = find(ans.begin(),ans.end(),a[j]);
                if(it == ans.end()){
                    ans.push_back(a[j]);
                }
            }
        }

        return ans;
    }
};