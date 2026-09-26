class Solution {
public:
    int characterReplacement(string s, int k) {
        int L = 0;
        unordered_map<char, int> counter; 
        int max_count = 0;
        int longest = 0;

        for(int R = 0; R < s.size(); R++){
            counter[s[R]]++;
            max_count = max(max_count, counter[s[R]]);

            while ((R-L+1) - max_count > k){
                counter[s[L]]--;
                L++;
            }
            longest = max(longest, (R-L+1));
        }
        return longest;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna