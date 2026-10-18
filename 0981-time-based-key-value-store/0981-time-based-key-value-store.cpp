class TimeMap {
public:
    unordered_map<string,vector<pair<int,string>>> data;

    TimeMap() {
        
    }
    
    void set(string key, string value, int timestamp) {
        data[key].push_back({timestamp, value});
    }
    
    string get(string key, int timestamp) {
        int L = 0;
        int R = data[key].size() - 1;

        while(L <= R){
            int mid = (L+R)/2;

            if(data[key][mid].first > timestamp){
                R = mid - 1;
            }else{
                L = mid + 1;
            }
        }
    
        if(R >= 0)
            return data[key][R].second;

        return "";
    }
};

/**
 * Your TimeMap object will be instantiated and called as such:
 * TimeMap* obj = new TimeMap();
 * obj->set(key,value,timestamp);
 * string param_2 = obj->get(key,timestamp);
 */

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna