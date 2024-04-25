class Solution {
public:
    int mySqrt(int x) {
        long int left = 0 , right = x , mid;
        while(left <= right){
            mid = left + (right - left )/2;
            if(mid *mid <= x && (mid+1)*(mid+1) > x){
                return mid;
            }else if(mid * mid > x){
                right = mid - 1;
            }else{
                left = mid + 1;
            }
        }
        return 1;
    }
};