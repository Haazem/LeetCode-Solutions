class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        
	int n = mat.size();
	int m = mat[0].size();
	if (n*m == r*c)
	{
		vector<vector<int>> v(r);
		int c1  = 0 , c2 = 0  , c3 = 0;
		for (int i = 0 ; i < r ; i ++ )
		{
			for (int j = 0 ; j < c ; j ++)
			{
				v[i].push_back(mat[c1][c3]);
				c3 ++;
				if(c3 == m)
				{
					c3 = 0 ;
					c1 = c2 + 1 ;
					c2 ++;
				}
			}
		}

		return v ;

	}
	else
	{
		return mat;
	}


    }
};