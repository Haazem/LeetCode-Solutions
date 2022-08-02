class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        	set<int> s1 ;
	int n = coordinates.size();
	for (int i = 0 ; i < n ; i ++ )
	{
		int x1 = coordinates[i][0];
		int y1 = coordinates[i][1];

		for (int j = 0 ; j < n ; j ++  )
		{
			if (i != j )
			{
				int x2 = coordinates[j][0];
				int y2 = coordinates[j][1];
				int k1 = (y2 - y1);
				int k2 = (x2 - x1);
				if (k2 != 0){
					s1.insert(k1 / k2);
					if (s1.size() > 1)
						return false ;
				}
			}
		}

	}

	return true;
    }
};