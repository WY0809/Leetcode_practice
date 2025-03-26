class Solution:
    def isValid(self, s: str) -> bool:
        if len(s) % 2 != 0:
            return False
        hashmap = {')':'(', ']':'[', '}':'{'}
        stack = []
        
        for i in s:   
            if i in hashmap:
                if not stack or hashmap[i] != stack[-1]:
                    return False
                stack.pop()
            else:
                stack.append(i)

        return True if not stack else False