class Solution {
public:
    // Direction vectors
int dx[4] = {0 , 0 , 1 , -1};
int dy[4] = {1 , -1 , 0 , 0};

int n , m ;

bool valid(int i , int j ){
	if(i < 0 || i >= m || j < 0 || j >= n)
		return false;
	return true;
}

void BFS_v1(int i ,  int j ,  vector<vector<char>>& grid , vector<vector<int>>& vis) {

	vis[i][j] = 1 ;
	queue<pair<int , int>> q;
	q.push({i , j});
	while(!q.empty()){
		pair<int , int> p = q.front();
		int x = p.first ;
		int y = p.second;
		q.pop();

		for (int i = 0 ; i < 4 ; i ++){
			int x2 = dx[i] + x;
			int y2 = dy[i] + y;

			if (!valid(x2, y2))
				continue;
			if(vis[x2][y2] != 0 || grid[x2][y2] != '1')
				continue;

			q.push({x2 , y2});
			vis[x2][y2] = 1;

		}

	}

}

    
    
    int numIslands(vector<vector<char>>& grid) {
        	int cnt = 0 ;
	m = grid.size();
	n = grid[0].size();

	vector<vector<int>> vis(m , vector<int>(n , 0));

	for (int i = 0 ; i < m ; i ++){
		for (int j = 0 ; j < n ; j ++){
			if (grid[i][j] == '1' && vis[i][j] == 0){
				BFS_v1(i, j, grid, vis);
				cnt ++;
			}
		}
	}


return cnt;
    }
};