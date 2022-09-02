class Solution {
public:
    
int do_BinSearch(vector<int>& nums ,int target){
	vector<int> temp;
	temp = nums;
	sort(temp.begin() , temp.end());

	int l = 0 , r = temp.size()-1;
	int mid ;
	while(l <= r){
		mid = (l + r) / 2 ;
		if(temp[mid] > target){
			r = mid - 1;
		}
		else if (temp[mid] < target){
			l = mid + 1;
		}
		else
			return mid;
	}
	return -1;
}
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        	int n = matrix.size();
	int ans = -1;

	for(int i = 0 ; i < n ; i ++ )
	{
		ans = do_BinSearch(matrix[i] , target);
		if (ans != -1)
			return true;
	}
	return false;

    }
};