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

        dic = sorted(dic.items(), key=lambda x: -x[1])

        ans =[num for num, _ in dic[:k]]
        return ans