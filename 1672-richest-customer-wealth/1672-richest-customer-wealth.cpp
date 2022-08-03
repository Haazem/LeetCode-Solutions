class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        	int n = accounts.size();
	int m = accounts[0].size();
	int mx = -1;
	for (int i = 0 ; i < n ; i ++ )
	{
		int cur = 0 ;
		for (int j = 0 ; j < m ; j ++ )
		{
			cur += accounts[i][j];
		}
		mx = max(mx , cur);
	}

	return mx;
    }
};