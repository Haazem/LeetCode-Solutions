class Solution {
public:
    
// Direction vectors
int dx[4] = {0 , 0 , 1 , -1};
int dy[4] = {1 , -1 , 0 , 0};

bool valid(int i , int j , int n , int m ){
	if(i < 0 || i >= n || j < 0 || j >= m)
		return false;
	return true;
}

void dfs(int r, int c, int n, int m, vector<vector<char>>& grid){

    	if(!valid(r, c, n, m) || grid[r][c] == '0') return ;
    	
		grid[r][c] = '0';

		for(int i = 0 ; i < 4 ; i ++){
        	int x2 = r + dx[i];
        	int y2 = c + dy[i];

        	dfs(x2 , y2 , n , m , grid);

        }
}


    
    int numIslands(vector<vector<char>>& grid) {
         
	int ans = 0 ;
	int n = (int) grid.size();  	// row
	int m = (int) grid[0].size();   // col

	for(int i = 0 ; i < n ; i ++ ){
		for(int j = 0 ; j < m ; j ++ ){
			if(grid[i][j] == '1'){
				ans ++;
				dfs(i, j, n, m, grid);
			}
		}
	}

	return ans;
        
        
    }
};