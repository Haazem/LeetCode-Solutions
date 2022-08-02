class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        
	int n = coordinates.size();

	//first_point
	int x1 = coordinates[0][0];
	int y1 = coordinates[0][1];

	//second point
	int x2 = coordinates[1][0];
	int y2 = coordinates[1][1];

	int dx = x2 - x1 ;
	int dy = y2 - y1 ;

	for (int i = 0 ; i < n ; i ++ )
	{
		int x = coordinates[i][0];
		int y = coordinates[i][1];

		if(dx*(y2 - y) != dy*(x2 - x))
			return false ;

	}

	return true;

    }
};