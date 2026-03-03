class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        if nums == []:
            return 0


        s = sorted(set(nums))
        print(s)
        n = len(s)
        i = s[0]
        count = 1
        ans = 1
        for j in range(1,n):
            print(s[j], i+1)
            if s[j] == i+1:
                count += 1
                if count > ans:
                    ans = count
            else:
                count = 1

            i = s[j]

        return ans

        