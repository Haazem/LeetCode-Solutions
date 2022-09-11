class Solution {
public:
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
       	vector<vector<int>> ans ;
	queue<vector<int>> q;
	int n = graph.size() - 1 ;
	q.push({0});

	while(!q.empty()){
		vector<int> cur = q.front();
		int last_node = cur[cur.size() - 1];
		q.pop();

		for(int i : graph[last_node]){
			auto temp = cur;
			if (i == n){
				temp.push_back(i);
				ans.push_back(temp);
			}else{
		       	temp.push_back(i);
			    q.push(temp);
		   }
		}
	}

	return ans; 
    }
};