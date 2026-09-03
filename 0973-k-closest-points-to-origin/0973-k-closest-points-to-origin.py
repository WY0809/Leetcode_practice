class Solution:
    def kClosest(self, points: List[List[int]], k: int) -> List[List[int]]:
        heap = []

        for x,y in points:
            dist = -(x * x + y * y)

            heapq.heappush(heap, (dist, x , y))
            
            if len(heap) > k:
                heapq.heappop(heap)
                    
        return [[x,y] for _, x, y in heap]


# Synced seamlessly with LeetHub Pro
# Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
# Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna