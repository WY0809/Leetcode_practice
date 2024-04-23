class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int length = digits.size()-1;
        for(int i = length; i >= 0 ; i--){
            digits[i]++;
            if(digits[i] == 10){
                if(i==0){
                    digits[i] = 1;
                    digits.push_back(0);
                }else{
                    digits[i] = 0;
                }
            }else{
                break;
            }
        }
        return digits;
    }
};