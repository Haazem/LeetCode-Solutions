class Solution {
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        	vector<int> temp = nums;
	vector<bool> res;
	int m = l.size();
	for(int i = 0 ; i < m ; i ++ )
	{
		int a = l[i] , b = r[i];
		sort(nums.begin()+a , nums.begin()+b+1);
		int diff = nums[a+1]-nums[a];
		bool ok = true;
		for(int j = a+1 ; j <= b ; j ++ )
		{
			if( nums[j] - nums[j-1] != diff)
			{
				ok = false ;
				break;
			}

		}
		if(ok)
			res.push_back(true);
		else
			res.push_back(false);
		nums = temp;
	}
	return res;
    }
};