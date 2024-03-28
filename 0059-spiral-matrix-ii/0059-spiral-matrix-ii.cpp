class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> ans(n, vector<int>(n,0));
        int i = 0, j = 0, num = 1, loop = n/2;
        int upper = n-1, lower = 0;
        while(loop--){
            for(;j<upper;j++){
                ans[i][j] = num;
                num++;
            }
            for(;i<upper;i++){
                ans[i][j] = num;
                num++;
            }
            for(;j>lower;--j){
                ans[i][j] = num;
                num++;
            }
            for(;i>lower;--i){
                ans[i][j] = num;
                num++;
            }
            i++;
            j++;
            upper--;
            lower++;
        }
        if(n%2==1){
            ans[i][j] = num;
        }
        return ans;
    }
};
