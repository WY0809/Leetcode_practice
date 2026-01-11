class Solution(object):
    def isRobotBounded(self, instructions):
        """
        :type instructions: str
        :rtype: bool
        """
        # 0 = N 1 = E 2 = S 3 = W
        dirs = [(0,1), (1,0), (0,-1), (-1,0)]
        dir = 0
        (x,y) = (0,0)
        for i in instructions:
            if i == 'L':
                dir = (dir + 3) % 4
            elif i == 'R':
                dir = (dir + 1) % 4
            else:
                dx, dy = dirs[dir]
                x += dx
                y += dy
        
        return (x,y) == (0,0) or dir != 0
