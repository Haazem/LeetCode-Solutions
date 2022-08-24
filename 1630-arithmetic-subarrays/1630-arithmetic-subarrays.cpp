class Solution {
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        
	vector<bool> res;
	//int n = nums.size();
	int m = l.size();
	for(int i = 0 ; i < m ; i ++ )
	{
		if(r[i] - l[i] + 1 < 2)
			continue;

		vector<int> temp;
		for(int j = l[i] ; j <= r[i] ; j++)
		{
			temp.push_back(nums[j]);
		}

		sort(temp.begin() , temp.end());
		int diff = temp[1]-temp[0];
		bool ok = true;
		for(int j = 0 ; j < (int) temp.size()-1 ; j ++ )
		{
			if( temp[j+1] - temp[j] != diff)
			{
				ok = false ;
				break;
			}

		}
		if(ok)
			res.push_back(true);
		else
			res.push_back(false);
	}
	return res;

    }
};