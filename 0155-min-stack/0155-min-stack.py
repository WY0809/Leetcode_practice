class MinStack:

    def __init__(self):
        self.val = []
        self.min_stack = []

    def push(self, value: int) -> None:
        self.val.append(value)

        if self.min_stack:
            self.min_stack.append(min(value, self.min_stack[-1]))
        else:
            self.min_stack.append(value)

    def pop(self) -> None:
        self.val.pop()
        self.min_stack.pop()

    def top(self) -> int:
        return self.val[-1]

    def getMin(self) -> int:
        return self.min_stack[-1]

# Your MinStack object will be instantiated and called as such:
# obj = MinStack()
# obj.push(value)
# obj.pop()
# param_3 = obj.top()
# param_4 = obj.getMin()

# Synced seamlessly with LeetHub Pro
# Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
# Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna