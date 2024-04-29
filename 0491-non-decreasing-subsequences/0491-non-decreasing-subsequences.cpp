// class Solution {
// public:
//     vector<vector<int>> sub(vector<int> &nums, int i, vector<int> &pre){
//         vector<vector<int>> b;    
//         for(int j = i+1 ; j < nums.size() ; j++){    
//             if(i != nums.size()-1 && pre[pre.size()-1] <= nums[j]){
//                 pre.push_back(nums[j]);
//                 b.push_back(pre);
//                 vector<vector<int>> temp = sub(nums , j , pre);
//                 b.insert(b.end(),temp.begin(),temp.end());
//                 pre.pop_back();
//             }
//         }
//         return b;
//     }
//     vector<vector<int>> findSubsequences(vector<int>& nums) {
//         unordered_set<vector<int>> ans;
//         for(int i = 0 ; i < nums.size() ; i++){
//             vector<int> temp = {nums[i]};
//             vector<vector<int>> a = sub(nums, i, temp);
//             // for(int j = 0 ; j < a.size() ; j++){
//             //     auto it = find(ans.begin(),ans.end(),a[j]);
//             //     if(it == ans.end()){
//                     ans.push_back(a[j]);
//                 // }
//             // }
//         }

//         return ans;
//     }
// };

class Solution {
public:
    void sub(vector<int>& nums, int index, vector<int>& sequence, vector<vector<int>>& result) {
        if (sequence.size() >= 2) {
            result.push_back(sequence);
        }
        
        unordered_set<int> used; // 用於去除重複的數字
        for (int i = index; i < nums.size(); ++i) {
            if ((sequence.empty() || nums[i] >= sequence.back()) && used.find(nums[i]) == used.end()) {
                sequence.push_back(nums[i]);
                sub(nums, i + 1, sequence, result);
                sequence.pop_back();
                used.insert(nums[i]);
            }
        }
    }
    
    vector<vector<int>> findSubsequences(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> sequence;
        sub(nums, 0, sequence, result);
        return result;
    }
};
