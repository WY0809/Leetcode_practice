class Solution:
    def combinationSum(self, candidates: List[int], target: int) -> List[List[int]]:
        ans = []

        def dfs(start, total, path):
            if total == target:
                ans.append(path.copy())
                return

            if total > target:
                return

            for i in range(start, len(candidates)):
                path.append(candidates[i])
                dfs(i, total+candidates[i], path)
                path.pop()

        dfs(0, 0, [])
        return ans


# Synced seamlessly with LeetHub Pro
# Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
# Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna