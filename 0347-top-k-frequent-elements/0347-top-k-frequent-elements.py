class Solution(object):
    def topKFrequent(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: List[int]
        """
        dic = defaultdict(int)

        for i in nums:
            dic[i] += 1
        print(dic)

        s = sorted(dic.values(), reverse = True)
        # print(s)

        ans = []
        i = 0
        while i < k:
            for key, value in dic.items():
                # print(key,)
                if i == k:
                    break
                elif value == s[i]:
                    print(key)
                    ans.append(key)
                    # print(key, value)
                    i += 1

        return ans