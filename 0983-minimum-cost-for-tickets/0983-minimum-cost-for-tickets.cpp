class Solution {
public:
    int mincostTickets(vector<int>& days, vector<int>& costs) {
        int length = days.size();
        vector<int> dp(days[length-1]+1);
        int j = 0;
        for(int i = 1 ; i <= days[length-1] ; i++){
            if( i == days[j]){
                dp[i] = min({dp[i-1] + costs[0], dp[max(0,i-7)] + costs[1], dp[max(0,i-30)] + costs[2]});
                j++;
            }else{
                dp[i] = dp[i-1];
            }
        }
        return dp[days[length-1]];
    }
};
