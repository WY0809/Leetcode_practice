class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        if len(s) != len(t):
            return False

        CountS, CountT = {}, {}

        for i in s:
            CountS[i] = 1 + CountS.get(i, 0)
        for i in t:
            CountT[i] = 1 + CountT.get(i, 0)
        return CountS == CountT