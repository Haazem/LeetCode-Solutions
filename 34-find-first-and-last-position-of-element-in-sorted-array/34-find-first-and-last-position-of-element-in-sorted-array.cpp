class Solution {
public:
    
    
int doSearch(vector<int>&nums , int target , bool left){

	int l = 0  , r = nums.size()-1;
	int pos = -1 ;
	int mid ;
	while(l <= r )
	{
		mid = (l+r) / 2;
		if(nums[mid] > target)
			r = mid - 1;
		else if (nums[mid] < target)
			l = mid + 1 ;
		else
		{
			pos = mid ;
			if (left)
			{
				r = mid - 1;
			}
			else
			{
				l = mid + 1;
			}
		}
	}

	return pos;
}

    
    vector<int> searchRange(vector<int>& nums, int target) {
        	vector<int> ans;

	int left = doSearch(nums, target, true);
	int right = doSearch(nums, target, false);

	ans.push_back(left);
	ans.push_back(right);
	return ans;

    }
};