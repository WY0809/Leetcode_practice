class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char,char> m,m2;
        for(int i = 0 ; i < s.size() ; ++i){
            map<char,char>::iterator iter = m.find(s[i]);
            if(iter != m.end()){//有找到
                if(t[i] != m[s[i]]){
                    return false;
                }
            }
            else{//沒找到
                m.insert(pair<char,char>(s[i],t[i]));
            }           

            iter = m2.find(t[i]);
            if(iter != m2.end()){//有找到
                if(s[i] != m2[t[i]]){
                    return false;
                }
            }
            else{//沒找到
                m2.insert(pair<char,char>(t[i],s[i]));
            }    
        }
        cout<<s<<endl;
        cout<<t<<endl;
        return true;
    }
};