class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
       
	int l = 0  , r = nums.size()-1 ;
	int mid;
	vector<int> ans;
	bool find = false;
	while(l <= r)
	{
		mid = l + (r - l) / 2 ;
		if(nums[mid] == target) find = true;
		if(nums[mid] >= target)
			r = mid - 1;
		else l = mid + 1 ;
	}

	if(!find)ans.push_back(-1);
	else ans.push_back(l);

	find = false;
    l = 0 , r = nums.size()-1;
	while(l <= r)
	{
		mid = l + (r - l) / 2 ;
		if(nums[mid] == target) find = true;
		if(nums[mid] <= target)
			l = mid + 1;
		else r = mid - 1 ;
	}
	if(!find) ans.push_back(-1);
	else ans.push_back(r);

	return ans; 
    }
};