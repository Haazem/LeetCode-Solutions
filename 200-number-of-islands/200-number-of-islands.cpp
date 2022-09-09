class Solution {
    int m, n;
    
    vector <pair <int, int> > movements = {
	    {0, 1}, {0, -1}, {1, 0}, {-1, 0},
    };
    
public:
        
     bool isValid(int i , int j) {
	    return i >= 0 && j >= 0 && i < m && j < n;
}
    
    void bfs(int i, int j, vector <vector<int>>& vis, 
                vector<vector<char>>& grid) {
        
        vis[i][j] = 1;
        queue <pair<int, int> > q;
        q.push({i, j});
        
        while(!q.empty()){
            auto v = q.front();
            int v_x = v.first;
            int v_y = v.second;
            q.pop();
            for(auto movement : movements){
                int child_x = movement.first + v_x;
                int child_y = movement.second + v_y;
                if(!isValid(child_x, child_y))
                    continue;
                if(vis[child_x][child_y] != 0 || grid[child_x][child_y] != '1')
                    continue;
                q.push({child_x , child_y});
                vis[child_x][child_y] = 1;
            }
        }
    }
    
    int numIslands(vector<vector<char>>& grid) {
              m = grid.size();
        n = grid[0].size();
        
        vector <vector<int>> vis(m,(vector<int>(n, 0)));
        int ct = 0;
        
        for(int i = 0; i < m; ++i){
            for(int j = 0; j < n; ++j){
                if(grid[i][j] == '1' && vis[i][j] == 0){
                    bfs(i, j, vis, grid);
                    ++ct;
                }
            }
        }
        return ct;
    }
};