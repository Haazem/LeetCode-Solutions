class Solution {
public:
    
    
typedef vector<vector<int>> GRAPH;

void add_undirected_edge(GRAPH &graph, int from, int to) {
	graph[from].push_back(to);

}

void BFS( vector<vector<int>>& graph , int start , vector<int>& vis){

	queue<int> q ;
	q.push(start);
	vis[start] = 1;

	while(!q.empty()){
	int cur = q.front();
	q.pop();

	for (int neighbor : graph[cur] ){
		if (vis[neighbor] == 0){
			vis[neighbor] = 1;
			q.push(neighbor);
		 }
	   }

	}
}


    
    
    int findCircleNum(vector<vector<int>>& isConnected) {
        	int cnt = 0 ;
	int n = isConnected.size();
	vector<int> vis(n , 0);
	GRAPH graph(n);

	for(int i = 0 ; i < n ; i ++){
		for (int j = 0 ; j < n ; j ++ ){
			if (isConnected[i][j] == 1 && i != j)
			add_undirected_edge(graph, i, j);
		}
	 }

	for (int i = 0 ; i < n ; i ++ ){
		if (vis[i] == 0 ){
			cnt ++;
			BFS(graph, i, vis);
		}
	}

	return cnt;
    }
};