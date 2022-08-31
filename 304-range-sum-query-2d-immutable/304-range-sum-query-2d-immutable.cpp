class NumMatrix {
public:
    vector<vector<int>> prefix ;
        int n ;
        int m ;
        int r1;
    NumMatrix(vector<vector<int>>& matrix) {
     
        prefix = matrix;
        n = matrix.size();
        m = matrix[0].size();
       for(int i = 0 ; i < n ; i ++ )
        {
           for (int j = 1 ;  j < m ; j ++ )
          {
        prefix[i][j] += prefix[i][j-1];
         }
       }
        
    }
        
    int sumRegion(int row1, int col1, int row2, int col2) {
 
        
    r1 = 0 ;
	for(int i = row1 ; i <= row2 ; i ++ )
	{
		r1 += prefix[i][col2];
		if(col1 > 0 )
		{
			r1 -= prefix[i][col1-1];
		}
	}
        
	return r1;
        
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */