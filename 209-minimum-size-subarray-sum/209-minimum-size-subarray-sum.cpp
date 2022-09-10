class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        
	int n = nums.size();
	if(n == 1){
		if(nums[0] >= target)
			return 1;
		return 0;
	}

	int sm = nums[0];
	if(sm >= target)
		return 1;

	int l = 0 , r = 1;
	int ans = n ;
	bool ok = false;
	while(l <= r && r < n){

		sm += nums[r];
		while(l<= r && r < n && sm >= target){
			ok = true;
			sm -= nums[l];
			ans = min(ans , r - l + 1);
			l++;
		}

		r++;
	}

	if(!ok)return 0;
	return ans;
    }
};