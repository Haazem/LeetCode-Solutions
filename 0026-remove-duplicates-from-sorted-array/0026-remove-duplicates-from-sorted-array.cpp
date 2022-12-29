class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       
    int n = (int)nums.size();
	int l = 1;

	int prev = nums[0];

	for (int i = 1 ; i < n ; i ++ ){
		if (nums[i] == prev)
			continue;
		else {
			prev = nums[i];
			nums[l++] = nums[i];
		}
	}
 
        return l;
        
    }
};