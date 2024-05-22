class Solution {
public:
    string addStrings(string num1, string num2) {
        int i = num1.length() - 1;
        int j = num2.length() - 1;
        int flag = 0;
        string ans;
        while (i != -1 && j != -1) {
            char a = num1[i] + num2[j] - '0' + flag;
            if (a > '9') {
                ans += a - 10;
                flag = 1;
            } else {
                ans += a;
                flag = 0;
            }
            i--;
            j--;
        }
        if (i == -1) {
            for (; j > -1; j--) {
                char a = num2[j] + flag;
                if (a > '9') {
                    ans += a - 10;
                    flag = 1;
                } else {
                    ans += a;
                    flag = 0;
                }
            }
        } else {
            for (; i > -1; i--) {
                char a = num1[i] + flag;
                if (a > '9') {
                    ans += a - 10;
                    flag = 1;
                } else {
                    ans += a;
                    flag = 0;
                }
            }
        }
        if (flag) {
            ans += '1';
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};