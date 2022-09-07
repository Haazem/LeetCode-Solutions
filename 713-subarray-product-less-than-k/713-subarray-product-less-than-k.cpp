class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if (k <= 1 )return 0 ;

	int n = (int)nums.size();
	int mul = 1 ;
	int l = 0 , r = 0  ;
	int ans = 0 ;
	while(r < n ){
		mul *= nums[r];
		while(mul >= k){
			mul /= nums[l];
			l++;
		}
		ans += (r - l + 1);
		r++;
	}

	return ans;
    }
};