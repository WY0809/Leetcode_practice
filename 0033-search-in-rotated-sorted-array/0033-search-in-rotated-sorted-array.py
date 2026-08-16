class Solution:
    def search(self, nums: List[int], target: int) -> int:
        L = 0
        R = len(nums) - 1

        while L <= R:
            mid = (L + R) // 2

            if nums[mid] == target:
                return mid

            if nums[L] <= nums[mid]:
                # 左半邊有排序
                if nums[L] <= target < nums[mid]:
                    R = mid - 1
                else:
                    L = mid + 1
            else:
                # 右半邊有排序
                if nums[mid] < target <= nums[R]:
                    L = mid + 1
                else:
                    R = mid - 1

        return -1

# Synced seamlessly with LeetHub Pro
# Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
# Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna