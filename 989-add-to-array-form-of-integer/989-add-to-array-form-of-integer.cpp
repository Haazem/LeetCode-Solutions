class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        vector<int> ans ;
	int n = num.size();
	int sum = 0 , carry = 0 ;
	for (int i= n-1 ; i >= 0 || k!=0 ; i --)
	{
		if (i >= 0  )
		{
			sum = num[i] + (k % 10) + carry;
		}
		else
		{
			sum = (k%10) + carry;
		}
		carry = sum / 10;
		ans.push_back(sum % 10);
		k /= 10;
	}
	if(carry) ans.push_back(carry);
	reverse(ans.begin() , ans.end());

	return ans;
    }
};