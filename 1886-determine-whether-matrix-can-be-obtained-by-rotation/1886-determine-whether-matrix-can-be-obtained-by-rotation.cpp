class Solution {
public:
 void rotate(vector<vector<int>> & mat)
{
	int n = mat.size();
	for (int i = 0 ; i < n ; i ++ )
	{
		for (int j = 0 ; j < i ; j ++ )
		{
			swap(mat[i][j] , mat[j][i]);
		}
	}

	for(int i = 0 ; i < n ; i ++ )
	{
		reverse(mat[i].begin() , mat[i].end());
	}
}
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        int count = 0 ;
	for(int k = 0 ; k < 4 ; k ++ )
	{
		rotate(mat);
		count = 0 ;
		for(int i = 0 ; i < (int) mat.size() ; i ++ )
		{
			for(int j = 0 ; j < (int) mat[i].size() ; j ++ )
			{
				if(mat[i][j] == target[i][j])
					count ++;
			}
		}
		
		if(count == (int) mat.size() * (int) mat.size())
				return true;
	}

	return false;
    }
};