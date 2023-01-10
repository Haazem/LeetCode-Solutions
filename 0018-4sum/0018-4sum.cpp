class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        
        
	int n = (int)nums.size();
	if(n < 4)
		return {};

	sort(nums.begin(), nums.end());
	set<vector<int>> ans;
	long long x, sum;
	int i;
	for(i = 0 ; i < (int)nums.size(); i ++){
		int j;
		for(j = i+1; j < (int)nums.size(); j++){
			x = nums[i] + nums[j];

			int l = j + 1, r = n-1;
			while(l < r){
				sum = nums[l]+nums[r];

				if(sum + x == target){
					ans.insert({nums[i], nums[j], nums[l], nums[r]});
					l++;
				}else if(sum + x > target)
					r --;
				else
					l ++;
			}

		}
	}

	vector<vector<int>> res(ans.begin(), ans.end());
	return res;
        
        
        
    }
};