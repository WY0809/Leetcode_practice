class Solution {
public:
    void sub(vector<int>& nums, int index, vector<int>& sequence, vector<vector<int>>& result) {
        if (sequence.size() > 1) {
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
