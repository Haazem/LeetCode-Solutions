class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        	vector<int> ans;
	int n = (int)nums.size();

	for(auto n : nums ){

		int i = abs(n) - 1;

		nums[i] = -1 * abs(nums[i]);
	}

	for(int i = 0 ; i < n ; i ++){
			if(nums[i] > 0)
				ans.push_back(i + 1);
	}

	return ans;
        
        
    }
};