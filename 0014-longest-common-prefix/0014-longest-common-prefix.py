class Solution(object):
    def longestCommonPrefix(self, strs):
        """
        :type strs: List[str]
        :rtype: str
        """
        ans = ""
        for i, ch in enumerate(strs[0]):
            for j in strs[1:]:
                if i >= len(j) or j[i] != ch:
                    return ans 
            ans += ch
        return ans


        # for i in range(k):
        #     for j in strs[1:]:
        #         if i+1 > len(j) or j[i] != strs[0][i]:
        #             return ans 
        #     ans += strs[0][i]
        # return ans


# class Solution(object):
#     def longestCommonPrefix(self, strs):
#         # if not strs:
#         #     return ""

#         first = strs[0]
#         for i, ch in enumerate(first):
#             if not all(i < len(s) and s[i] == ch for s in strs[1:]):
#                 return first[:i]
#         return first
