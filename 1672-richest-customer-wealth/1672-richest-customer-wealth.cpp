class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        	int n = accounts.size();
	int mx = -1;
	for (int i = 0 ; i < n ; i ++ )
	{
		int cur = accumulate(accounts[i].begin(), accounts[i].end() , 0 );
		mx = max(mx , cur);
	}

	return mx;
    }
};