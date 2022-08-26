class Solution {
public:
    
    
double solve_sqrt(int x , int y)
{
	double k = pow(x , 2 ) + pow(y , 2);
	return sqrt(k);
}
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        	vector<vector<int>> ans;
	map<double , vector<vector<int>>> mp;
	vector<double> temp;
	int n = points.size();

	for(int i = 0 ; i < n ; i ++ )
	{
		double r = solve_sqrt(points[i][0], points[i][1]);
		mp[r].push_back(points[i]);
		temp.push_back(r);
	}
	sort(temp.begin() , temp.end());


	for(auto i : temp)
	{
		if(k == 0) break;
		for(auto j : mp[i])
		{
			if(k == 0) break;
			k--;
			ans.push_back(j);
		}
	}

	return ans;

    }
};