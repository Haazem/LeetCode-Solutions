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
			nums[count1++] = nums[i];

		}
	}

	for (int i = count1 ; i < (int) nums.size() ; i ++ )
	{
		nums[i] = 0 ;
	}

    }
};