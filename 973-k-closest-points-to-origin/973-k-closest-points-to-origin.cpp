class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        	vector<vector<int>> ans;
	priority_queue<pair<int , vector<int>>> pq;
	for(auto i : points)
	{
		int r = pow(i[0] , 2) + pow(i[1] , 2);
		pq.push({r , i});
	}


	while(!pq.empty())
	{
		if((int)pq.size() <= k)
            ans.push_back(pq.top().second);
		pq.pop();
	}

	return ans;
    }
};