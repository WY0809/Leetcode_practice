class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> seen(nums.begin(), nums.end());
        int longest = 0;

        for (int x : seen) {
            if (!seen.count(x - 1)) {
                int curr = x;
                while(seen.count(curr)){
                    curr++;
                }
                longest = max(longest, curr - x);
            }
        }
        return longest;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna