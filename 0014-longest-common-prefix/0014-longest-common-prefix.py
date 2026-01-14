class Solution(object):
    def longestCommonPrefix(self, strs):
        """
        :type strs: List[str]
        :rtype: str
        """
        ans = ""
        for i, ch in enumerate(strs[0]):
            for s in strs[1:]:
                if i >= len(s) or s[i] != ch:
                    return ans 
            ans += ch
        return ans
