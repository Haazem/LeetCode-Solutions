class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        
	unordered_map<int , set<char>> rows;
	unordered_map<int , set<char>> cols;
	map<pair<int , int> , set<char>> squares;
		
	for(int i = 0 ; i < (int) board.size() ; i ++ ){
		for (int j = 0 ; j < (int)board.size() ; j++){
			if(board[i][j] == '.')continue;
			
			if(rows[i].find(board[i][j]) != rows[i].end() || 
			   cols[j].find(board[i][j]) != cols[j].end() ||
			   squares[{i/3,j/3}].find(board[i][j]) != squares[{i/3,j/3}].end())
				return false ;
			
			rows[i].insert(board[i][j]);
			cols[j].insert(board[i][j]);
			pair<int , int> p = {i/3 , j/3};
			squares[p].insert(board[i][j]);
			
		}
	}


	return true;

    }
};