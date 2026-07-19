class Solution:
    def isValid(self, s: str) -> bool:
        if len(s) % 2 != 0:
            return False

        hashmap = {
            ')': '(',
            ']': '[',
            '}': '{'
        }

        stack = []

        for char in s:
            if char in hashmap:
                if not stack or hashmap[char] != stack[-1]:
                    return False
                stack.pop()
            else:
                stack.append(char)

        return not stack

# Synced seamlessly with LeetHub Pro
# Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
# Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna