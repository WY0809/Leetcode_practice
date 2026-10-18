class TimeMap {
public:
    unordered_map<string, vector<pair<int, string>>> data;

    TimeMap() {}

    void set(string key, string value, int timestamp) {
        data[key].push_back({timestamp, value});
    }

    string get(string key, int timestamp) {
        auto& values = data[key];

        int L = 0;
        int R = values.size() - 1;

        while (L <= R) {
            int mid = (R + L) / 2;

            if (values[mid].first > timestamp)
                R = mid - 1;
            else
                L = mid + 1;
        }

        return R >= 0 ? values[R].second : "";
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