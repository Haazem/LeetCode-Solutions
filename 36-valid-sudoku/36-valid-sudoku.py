class Solution:
    def isValidSudoku(self, board: List[List[str]]) -> bool:
            rows = defaultdict(set)
            cols = defaultdict(set)
            squares = defaultdict(set) #key (row/3, col/3)

            for i in range(len(board)):
                for j in range(len(board)):
                    if board[i][j] == '.':
                        continue
                    if (board[i][j] in rows[i] or
                        board[i][j] in cols[j] or
                        board[i][j] in squares[(i//3 , j//3)]):
                        return False

                    rows[i].add(board[i][j])
                    cols[j].add(board[i][j])
                    squares[(i//3 , j//3)].add(board[i][j])

            return True
