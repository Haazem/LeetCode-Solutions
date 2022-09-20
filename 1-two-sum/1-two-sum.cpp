class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
	vector<int> result;
unordered_map<int ,int> mp;
		for(int i = 0 ; i <(int)nums.size() ; i ++){
		int d = target - nums[i];
		if (mp.find(d) != mp.end()){
			result.push_back(mp[d]);
			result.push_back(i);
			break;
		}else {
			mp[nums[i]] = i ;
		}
	}

	return result;

    }
};