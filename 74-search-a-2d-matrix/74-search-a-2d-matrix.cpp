class Solution {
public:
    bool searchMatrix(vector<vector<int>>& arr, int target) {
           int n = arr.size();
        int m = arr[0].size();
        
        int low=0;
        int high=(n*m)-1;
        
        while(low <= high)
        {
            int mid = (low + high)/2;
            if(arr[mid/m][mid%m] == target)
                return true;
            else if(arr[mid/m][mid%m] > target)
                high = mid-1;
            else
                low = mid+1;
        }
        return false;
    }
};