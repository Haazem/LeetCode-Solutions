class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        
	map<int , int> mp;
	int n = points.size();

	for (int i = 0 ; i < n ; i ++ )
	{
		if (points[i][0] == x || points[i][1] == y )
		{
			int dis = abs(x - points[i][0]) + abs(y - points[i][1]);
			mp[i] = dis;
		}
	}


	map<int , int>::iterator j ;
	int mn = 100000009;
	int res = -1 ;
	for (j = mp.begin() ; j!= mp.end() ; j ++ )
	{
		//cout << j->first << " " << j->second << endl;
		if(j->second < mn)
		{
			mn = j->second;
			res = j->first;
		}
	}

	return res ;

    }
};