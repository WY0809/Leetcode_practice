class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        nums_set = set(nums)
        ans = 0
        
        for num in nums_set:
            if num - 1 not in nums_set:
                current_num = num
                # count = 1

                while current_num in nums_set:
                    # count += 1
                    current_num += 1

                ans = max(ans, current_num - num)
        return ans 