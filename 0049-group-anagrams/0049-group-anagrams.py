# from collections import defaultdict

class Solution(object):
    def groupAnagrams(self, strs):
        """
        :type strs: List[str]
        :rtype: List[List[str]]
        """
        # groups = {}
        groups = defaultdict(list)

        for i in strs:
            key = tuple(sorted(i))
            # if key not in groups:
            #     groups[key] = []
            groups[key].append(i)

        return groups.values()