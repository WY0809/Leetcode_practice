class Solution:
    def lengthOfLIS(self, nums: List[int]) -> int:
        tails = [nums[0]]

        for num in nums[1:]:
            if num > tails[-1]:
                tails.append(num)
            else:
                L = 0
                R = len(tails) - 1

                while L <= R:
                    mid = (L + R) // 2

                    if num > tails[mid]:
                        L = mid + 1
                    else:
                        R = mid - 1
                tails[L] = num

        return len(tails)

# Synced seamlessly with LeetHub Pro
# Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
# Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
