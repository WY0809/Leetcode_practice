class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        unordered_map<char, int> freq;

        for (char task : tasks) {
            freq[task]++;
        }

        priority_queue<int> pq;
        for (auto& [task, count] : freq) {
            pq.push(count);
        }

        int total = 0;

        while (!pq.empty()) {
            vector<int> used;
            int slots = n + 1;

            while (slots > 0 && !pq.empty()) {
                int count = pq.top();
                pq.pop();

                count--;

                if (count > 0) {
                    used.push_back(count);
                }

                total++;
                slots--;
            }

            for (int count : used) {
                pq.push(count);
            }

            if (!pq.empty()) {
                total += slots;
            }
        }

        return total;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna