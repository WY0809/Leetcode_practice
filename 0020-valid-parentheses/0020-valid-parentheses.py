class Solution:
    def isValid(self, s: str) -> bool:
        if len(s) % 2 != 0:
            return False
        hashmap = {')':'(', ']':'[', '}':'{'}

        left = ['(', '[', '{']
        right = [')', ']', '}']
        stack = []
        for i, n in enumerate(s):
            print(i,n)
            if n in left:
                stack.append(n)
                print(n)
            else:
                print(hashmap[n])
                # print(stack[-1])
                if len(stack) == 0 or hashmap[n] != stack[-1]:
                    return False
                stack.pop()
        if len(stack) != 0:
            return False
        return True         