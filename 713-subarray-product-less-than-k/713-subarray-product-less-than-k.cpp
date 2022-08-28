class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if(k <= 1 ) return 0;

	int n = nums.size();
    int l = 0 , r = 0 ;
    int mul = 1 ;
    int res = 0 ;
    while(r < n){
    	mul *= nums[r];
    	while(mul >= k)
    	{
    		mul /= nums[l];
    		l++;
    	}
    	res += r - l + 1 ;
    	r++;
    }


	return res;
    }
};