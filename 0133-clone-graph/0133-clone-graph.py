class Solution:
    def cloneGraph(self, node: Optional['Node']) -> Optional['Node']:
        if not node:
            return None

        clones = {}

        def clone(node):
            if node in clones:
                return clones[node]

            new_node = Node(node.val)
            clones[node] = new_node

            for neighbor in node.neighbors:
                new_node.neighbors.append(clone(neighbor))

            return new_node

        return clone(node)

# Synced seamlessly with LeetHub Pro
# Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
# Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna