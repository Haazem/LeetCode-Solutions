class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        
int n = arr.size();
int ans = 0 ;

for (int i = 1 ; i < n ; i ++ )
{
	arr[i] = arr[i] + arr[i - 1];
}

for (int i = 0 ; i < n ; i ++ )
{
	for (int j = i ; j < n ; j += 2 )
	{
		int k = i - 1 ;
		if (k < 0 )
		{
			ans += arr[j];
		}
		else
		{
			ans += (arr[j] - arr[i-1]);
		}
	}
}

return ans;
    }
};