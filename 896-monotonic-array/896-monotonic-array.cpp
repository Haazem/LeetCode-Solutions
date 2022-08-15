class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        
	int n = nums.size();
	if (n == 1 )
		return true;

	bool low = false ;
	bool high = false ;

	for (int i = 0 ; i < n - 1 ; i ++ )
	{
		if (nums[i] == nums[i + 1])
			continue ;
		else
		{
			if (low == false && high == false )
			{
				if (nums[i] < nums[i + 1])
				{
					low = true;
				}
				else
				{
					high = true;
				}
			}
			else if (nums[i] > nums[i+1] && low == true )
				return false ;
			else if (nums[i] < nums[i+1] && high == true )
				return false ;
			else
				continue;
		}
	}


	return true;
    }
};