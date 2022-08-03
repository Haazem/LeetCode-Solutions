class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        	int count1 = 0 ;
	int count_zero = 0 ;
	int n = nums.size();

	for(int i = 0 ; i < n ; i ++)
	{
		if (nums[i] == 0)
		{
			count_zero++;
		}
		else
		{
			nums[count1] = nums[i];
			count1 ++;
		}
	}

	for (int i = 0 ; i < count_zero ; i ++ )
	{
		nums[count1] = 0 ;
		count1++;
	}
    }
};