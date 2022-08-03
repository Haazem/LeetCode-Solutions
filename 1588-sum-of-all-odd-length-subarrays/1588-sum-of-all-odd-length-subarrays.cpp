class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        
	int n = arr.size();
	int ans = 0 ;
	for (int i = 0 ; i < n ; i ++ )
	{
		for (int j = i ; j < n ; j ++ )
		{
			if ((j - i + 1) % 2 != 0 )
			{
				int temp =0 ;
				for (int k = i ; k <= j ; k ++ )
				{
					temp += arr[k];

				}
				ans += temp;
			}
		}

	}

	return ans;
    }
};