class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        	vector<vector<int>> ans;
	priority_queue<pair<long long , int>> pq;
	int n = points.size();
	for(int i= 0 ; i < n ; i ++ )
	{
		long long r = points[i][0]* points[i][0] +  points[i][1]* points[i][1];
		pq.push({r , i});
		if((int)pq.size() > k)
			pq.pop();
	}

	while(!pq.empty())
	{
		ans.push_back(points[pq.top().second]);
		pq.pop();
	}

	return ans;
    }
};