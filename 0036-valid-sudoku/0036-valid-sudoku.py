class Solution(object):
    def isValidSudoku(self, board):
        """
        :type board: List[List[str]]
        :rtype: bool
        """
        seen = set()
        # dic[board[0][0]] = 
        for i in range(9):
            for j in range(9):
                num = board[i][j]
                if num != ".":
                    box = i // 3 * 3 + j // 3
                    
                    temp = [
                    ("row",i,num),
                    ("col",j,num),
                    ("box",box,num)
                    ]
                    for k in temp:
                        if k in seen:
                            return False
                        seen.add(k)
        return True
                    