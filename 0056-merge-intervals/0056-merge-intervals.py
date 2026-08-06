class Solution:
    def merge(self, intervals: List[List[int]]) -> List[List[int]]:
        ans = []
        intervals.sort()
        L, R = intervals[0]

        for i in range(1, len(intervals)):
            start, end = intervals[i]

            if start <= R:
                R = max(R, end)
            else:
                ans.append([L, R])
                L, R = start, end

        ans.append([L, R])
        return ans

# Synced seamlessly with LeetHub Pro
# Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
# Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna