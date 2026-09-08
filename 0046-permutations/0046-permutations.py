class Solution:
    def permute(self, nums: List[int]) -> List[List[int]]:
        ans = []

        def dfs(path, used):
            if len(path) == len(nums):
                ans.append(path.copy())
                return

            for num in nums:
                if num in used:
                    continue

                path.append(num)
                used.add(num)

                dfs(path, used)
                
                path.pop()
                used.remove(num)

        dfs([], set())
        return ans

# Synced seamlessly with LeetHub Pro
# Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
# Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna