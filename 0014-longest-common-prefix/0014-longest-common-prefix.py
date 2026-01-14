class Solution(object):
    def longestCommonPrefix(self, strs):
        """
        :type strs: List[str]
        :rtype: str
        """
        ans = ""
        n = len(strs)
        k = len(strs[0])
        for i in range(k):
            stop = False
            for j in strs[1:]:
                if i+1 > len(j):
                    stop = True
                    break 
                if j[i] != strs[0][i]:
                    stop = True
                    ok = False
                    break
            if stop:
                break

            ans += strs[0][i]

        return ans
