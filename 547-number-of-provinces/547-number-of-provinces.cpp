class Solution {
public:

    typedef vector<vector<int>> GRAPH;

void add_undirected_edge(GRAPH &graph, int from, int to) {
	graph[from].push_back(to);

}

    
    void dfs(vector<int>& vis , GRAPH &graph , int start){

	for (auto i : graph[start]){
		if (!vis[i]){
			vis[i] = 1;
			dfs(vis , graph , i);
		}
	}
}

    
    int findCircleNum(vector<vector<int>>& isConnected) {
        	int cnt = 0 ;
	int n = isConnected.size();
	GRAPH graph(n);
	for(int i = 0 ; i < n ; i ++){
		for(int j = 0 ; j < n ; j ++){
			if(isConnected[i][j] == 1){
				add_undirected_edge(graph, i, j);
			}
		}
	}

	vector<int> vis(n , 0);
	for(int i = 0 ; i < n ; i ++){
		if (vis[i] == 0){
			dfs(vis , graph , i);
			cnt ++;
		}
	}
	return cnt;
	
    }
};