class Solution:
    def checkInclusion(self, s1: str, s2: str) -> bool:
        n1 = len(s1)
        count1 = Counter(s1)
        count2 = Counter(s2[:n1])
        
        if count1 == count2:
                return True

        for R in range(n1, len(s2)):
            count2[s2[R]] += 1
            count2[s2[R-n1]] -= 1
            
            if count1 == count2:
                return True
            
        return False

# Synced seamlessly with LeetHub Pro
# Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
# Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna