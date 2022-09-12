class Solution {
public:
    
    int dx[4] = {0 , 0 , 1 , -1};
int dy[4] = {1 , -1 , 0 , 0};

bool valid(int m , int n , int i , int j){
	if (i >= m || i < 0 || j < 0 || j >= n)
		return false ;
	return true;
}


void dfs(int i , int j , int m , int n , vector<vector<char>>& board){

	board[i][j] = 'T';

	for(int k = 0 ; k < 4 ; k ++){

		int x = dx[k] + i;
		int y = dy[k] + j;

		if(valid(m, n, x, y) && board[x][y] == 'O'){

		dfs(x , y , m , n , board);

		}
	}

}

    
    void solve(vector<vector<char>>& board) {
        	int m = board.size();
	int n = board[0].size();

	for (int i = 0 ; i < m ; i ++){
		for (int j = 0 ; j < n ; j ++){
			if ((i == 0 || i == m - 1 || j == 0 || j == n - 1) && board[i][j] == 'O'){

				dfs(i, j , m , n , board);
			}
		}
	}

	for (int i = 0 ; i < m ; i ++ ){
		for (int j = 0 ; j < n ; j ++ ){
			if (board[i][j] == 'T')
				board[i][j] = 'O';
			else
				board[i][j] = 'X';
		}
	}

    }
};