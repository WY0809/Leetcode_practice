class Solution:
    def kthSmallest(self, root: Optional[TreeNode], k: int) -> int:
        stack = []
        curr = root

        while curr or root:
            while curr:
                stack.append(curr)
                curr = curr.left
            
            curr = stack.pop()

            k -= 1
            if k == 0:
                return curr.val

            curr = curr.right

# Synced seamlessly with LeetHub Pro
# Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
# Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna