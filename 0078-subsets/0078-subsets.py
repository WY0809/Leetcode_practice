class Solution:
    def subsets(self, nums: List[int]) -> List[List[int]]:
        ans = []

        def dfs(start, path):
            ans.append(path.copy())

            for i in range(start, len(nums)):
                path.append(nums[i])
                dfs(i+1, path)
                path.pop()
            
        dfs(0,[])
        return ans

# Synced seamlessly with LeetHub Pro
# Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
# Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna