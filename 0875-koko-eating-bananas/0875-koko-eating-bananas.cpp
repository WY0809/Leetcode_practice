class Solution {
public:
    long long hoursNeeded(const vector<int>& piles, int speed) {
        long long hours = 0;

        for (int pile : piles) {
            hours += (static_cast<long long>(pile) + speed - 1) / speed;
        }

        return hours;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int L = 1;
        int R = *max_element(piles.begin(), piles.end());

        while (L <= R) {
            int mid = L + (R - L) / 2;

            if (hoursNeeded(piles, mid) > h) {
                L = mid + 1;
            } else {
                R = mid - 1;
            }
        }

        return L;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna