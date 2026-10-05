class Solution:
    def findCircleNum(self, isConnected: List[List[int]]) -> int:
        n = len(isConnected)
        visited = set()

        def dfs(city):
            for nei in range(n):
                if isConnected[city][nei] and nei not in visited:
                    visited.add(nei)
                    dfs(nei)

        provinces = 0

        for city in range(n):
            if city not in visited:
                provinces += 1
                visited.add(city)
                dfs(city)
                
        
        return provinces
        


# Synced seamlessly with LeetHub Pro
# Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
# Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
