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
            # print(strs[0][i])
            ok = True
            stop = False
            for j in strs[1:]:
                
                print(j)
                if i+1 > len(j):
                    stop = True
                    break 
                print(j[i], strs[0][i])
                if j[i] != strs[0][i]:
                    stop = True
                    ok = False
                    break
            if stop:
                break

            if ok:
                ans += strs[0][i]
                print(ans)

        # print(ans)
        return ans
