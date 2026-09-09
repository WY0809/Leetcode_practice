class Solution:
    def kthSmallest(self, root: Optional[TreeNode], k: int) -> int:
        count = 0
        res = 0

        def dfs(node):
            nonlocal count, res

            if not node:
                return False

            if dfs(node.left):
                return True

            count += 1
            if count == k:
                res = node.val
                return True

            return dfs(node.right)

        dfs(root)
        return res

# Synced seamlessly with LeetHub Pro
# Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
# Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
