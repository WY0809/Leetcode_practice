class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        # if nums == []:
        #     return 0

        # s = sorted(set(nums))
        # n = len(s)
        # i = s[0]
        # count = 1
        # ans = 1
        # for j in range(1,n):
        #     if s[j] == i+1:
        #         count += 1
        #         if count > ans:
        #             ans = count
        #     else:
        #         count = 1

        #     i = s[j]

        # return ans

        nums_set = set(nums)
        ans = 0
        
        for num in nums_set:
            if num - 1 not in nums_set:
                current_num = num
                count = 1

                while current_num+1 in nums_set:
                    count += 1
                    current_num += 1

                ans = max(count, ans)
        return ans 