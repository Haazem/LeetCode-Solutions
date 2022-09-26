class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        	int ans = 0;
	set<int> s ;

	for (int i = 0 ; i < (int)nums.size() ; i ++ ){
		s.insert(nums[i]);
	}

	for (auto i : s ){
		if (s.find(i-1) == s.end()){
			int length = 1 ;
			while(s.find(length + i) != s.end()){
				length ++;
			}
			ans = max(ans , length);
		}
	}


	return ans;
    }
};