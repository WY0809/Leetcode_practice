class Solution {
public:
    int binaryGap(int n) {
        vector<int> location;
        int count = 0;
        while(n>0){
            if(n%2)
                location.push_back(count);
            n = n >> 1;
            count++;
        }
        int max = 0;
        for(int i = 0 ; i < location .size()-1; ++i){
            if(location[i+1]-location[i] > max){
                max = location[i+1]-location[i];
            }
        }
        return max;
    }
};