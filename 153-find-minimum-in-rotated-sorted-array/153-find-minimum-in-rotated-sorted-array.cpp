class Solution {
public:
    int findMin(vector<int>& nums) {
     
	int n = nums.size();
	int l = 0 , r = n-1;
	int mid , ans = nums[0];
	while(l <= r){
		if(nums[l] < nums[r]){
			ans = min(ans , nums[l]);
			break;
		}
		mid = l + (r - l) / 2 ;
        		ans = min(ans , nums[mid]);

		if(nums[mid] >= nums[l]){
			//search right
			l = mid + 1 ;
		}else {
			//search left
			r = mid - 1;
		}

	}

return ans;   
    }
};