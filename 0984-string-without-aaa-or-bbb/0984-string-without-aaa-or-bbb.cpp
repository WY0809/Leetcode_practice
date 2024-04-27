class Solution {
public:
    string strWithout3a3b(int a, int b) {
        string ans;
        while (a != 0 && b != 0) {
            cout << ans << " ";

            if (a - 2 >= b) {
                ans += "aab";
                a -= 2;
                b--;
            } else if (b - 2 >= a) {
                ans += "bba";
                b -= 2;
                a--;
            } else {
                ans += "ba";
                b--;
                a--;
            }
            cout << a << " " << b << " ";
            cout << ans << endl;
        }
        while(a--){
            ans+="a";
        }
        while(b--){
            ans+="b";
        }
        return ans;
    }
};