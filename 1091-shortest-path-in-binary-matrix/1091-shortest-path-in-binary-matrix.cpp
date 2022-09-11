class Solution {
public:
    
    int dx[8] = {0 , 1 , 0 ,  -1 , 1 , 1 , -1 ,-1};
int dy[8] = {1 , 0 , -1 , 0 , 1 , -1, 1 , -1};

bool valid(int n , int i , int j ){
	if (i < 0 || i >= n || j < 0 || j >= n)
		return false;
	return true;
}

    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        	int n = grid.size();
	if (grid[0][0] != 0) return -1;
	queue<vector<int>> q ;
	q.push({0 , 0 , 1});
	grid[0][0] = 1 ;
	while(!q.empty()){
		auto cur = q.front();
		if(cur[0] == n-1 && cur[1] == n-1)return cur[2];
		q.pop();

		for(int i = 0 ; i < 8 ; i ++){
			int x = cur[0] + dx[i];
			int y = cur[1] + dy[i];

			if(!valid(n, x, y) || grid[x][y] == 1)
				continue;

			q.push({x ,y , cur[2] + 1});
			grid[x][y] = 1;

		}
	}
	return -1;
    }
};