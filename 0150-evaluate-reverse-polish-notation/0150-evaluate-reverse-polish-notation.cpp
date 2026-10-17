class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        vector<int> st;

        for (const string& s: tokens){
            if(s == "+" || s == "-" || s == "*" || s == "/"){
                int b = st.back();
                st.pop_back();
                
                int a = st.back();
                st.pop_back();

                if(s == "+")
                st.push_back(a + b);
                else if(s == "-")
                    st.push_back(a - b);
                else if(s == "*")
                    st.push_back(a * b);
                else
                    st.push_back(a / b);
            }else{
                st.push_back(stoi(s));
            }
        }
        return st.back();
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna