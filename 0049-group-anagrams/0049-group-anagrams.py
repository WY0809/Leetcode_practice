class Solution(object):
    def groupAnagrams(self, strs):
        """
        :type strs: List[str]
        :rtype: List[List[str]]
        """
               
        groups = {}
        for i in strs:
            key = "".join(sorted(i))
            print(key)
            if key not in groups:
                groups[key] = []
                
            groups[key].append(i)

        # for i in groups:
        #     for j in strs:
        #         if i == "".join(sorted(j)):
        #             groups[i].append(j)

        return list(groups.values())