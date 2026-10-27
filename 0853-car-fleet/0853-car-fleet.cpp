class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int, int>> cars;

        for (int i = 0; i < position.size(); i++) {
            cars.push_back({position[i], speed[i]});
        }

        sort(cars.begin(), cars.end());

        int fleet = 0;
        double fleetTime = 0.0;

        for (int i = (int)cars.size() - 1; i >= 0; i--) {
            double time = double(target - cars[i].first) / cars[i].second;

            if (time > fleetTime) {
                fleet++;
                fleetTime = time;
            }
        }

        return fleet;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna