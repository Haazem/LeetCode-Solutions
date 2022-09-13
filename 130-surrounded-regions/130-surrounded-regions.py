class Solution:
    def solve(self, board: List[List[str]]) -> None:
            rows , cols = len(board) , len(board[0])
            dx = [1,-1,0,0]
            dy = [0,0,1 ,-1]
            def dfs(i , j):
                if i < 0 or i >= rows or j < 0 or j >= cols or board[i][j] != "O":
                    return
                board[i][j] = "T"
                for k in range(4):
                    x = dx[k] + i
                    y = dy[k] + j
                    dfs(x , y)
            for i in range(rows):
                for j in range(cols):
                    if (board[i][j] == "O" and (i in [0 , rows-1] or j in [0 , cols-1])):
                        dfs(i , j)

            for i in range(rows):
                for j in range(cols):
                    if (board[i][j] == "O"):
                        board[i][j] = "X"

            for i in range(rows):
                for j in range(cols):
                    if board[i][j] == "T":
                        board[i][j] = "O"


        