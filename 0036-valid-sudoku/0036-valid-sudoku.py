class Solution(object):
    def isValidSudoku(self, board):
        """
        :type board: List[List[str]]
        :rtype: bool
        """
        seen = set()
        
        for i in range(9):
            for j in range(9):
                num = board[i][j]
                if num == ".":
                    continue

                box = (i // 3) * 3 + (j // 3)
    
                for key in (
                ("row",i,num),
                ("col",j,num),
                ("box",box,num)
                ):
                    if key in seen:
                        return False
                    seen.add(k)
        return True
                    
