class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        for(auto iter = nums.begin(); iter != nums.end()-1; iter++){
            cout<<*iter<<*(iter+1)<<endl;
            if(*iter == *(iter+1)){
                nums.erase(iter);
                iter--;
            }
        }
        return nums.size();
    }
};