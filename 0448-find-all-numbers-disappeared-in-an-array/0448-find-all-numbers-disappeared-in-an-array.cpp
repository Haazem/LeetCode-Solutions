class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        
        	map<int , int>mp;
	int n = (int)nums.size();

	for(int i = 0 ; i < n ; i ++){
		mp[nums[i]] ++;
	}

	vector<int> ans;
	for(int i = 1 ; i <= n ; i ++){
		if(mp[i] > 0)continue;
		ans.push_back(i);
	}

	return ans;
        
        
    }
};