class Solution(object):
    def productExceptSelf(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        mul = 1
        zero = 0
        
        for i in nums:
            if i != 0:
                mul *= i
            else:
                zero += 1

        ans = []
        if zero > 1:
            ans = [0] * len(nums)
        elif zero == 1:
            for i in nums:
                if i != 0:
                    ans.append(0)
                else:
                    ans.append(mul)
        else:
            for i in nums:
                ans.append(mul/i)
                
            
        return ans

