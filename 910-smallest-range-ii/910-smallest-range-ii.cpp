class Solution {
public:
    int smallestRangeII(vector<int>& nums, int k) {
        sort(nums.begin() , nums.end());
        	int n = nums.size();
	int ans = *max_element(nums.begin() , nums.end()) - *min_element(nums.begin(),nums.end());

	for(int i = 0 ; i< n-1 ; i ++)
	{
		int mx = max(nums[n-1] - k , nums[i]+k);
		int mn = min(nums[0]+k , nums[i+1]-k);
		ans = min(ans , mx-mn);
	}

	return ans ;
    }
};