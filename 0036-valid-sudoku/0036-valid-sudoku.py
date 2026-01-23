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
                    box_col = i // 3
                    box_row = j // 3
                    box = box_col*3 + box_row
                    print(i,j,box,num)
                    
                    temp = []
                    temp.append(("row",j,num))
                    temp.append(("col",i,num))
                    temp.append(("box",box,num))

                    for k in temp:
                        if k in seen:
                            return False
                        seen.add(k)
                    

        return True
                    