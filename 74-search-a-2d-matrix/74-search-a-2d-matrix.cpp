class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
	int m = matrix[0].size();
	int k = n*m-1;
	int mid;
	int l = 0,r=k;
	while(l<=r){
		mid = l + (r - l) / 2 ;
		int row = mid/m;
		int col = mid%m;
		if(matrix[row][col] == target){
			return true;
		}else if (matrix[row][col] > target){
			r = mid - 1;
		}else {
			l = mid+1;
		}

	}
	return false;
    }
};