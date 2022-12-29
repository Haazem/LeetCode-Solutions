class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        map<int, int> mp;
	int n = (int)nums.size();
	int l = 0;

	for(int i = 0 ; i < n ; i ++ ){
		mp[nums[i]] += 1;
		if(mp[nums[i]] > 1)
			continue;
		else
		{
			nums[l] = nums[i];
			l ++;
		}
	}

        return l;
        
    }
};