class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        	int n = digits.size() - 1;
	int x = digits[n];
	if (x != 9)
	{
		digits[n] = x + 1 ;

	}
	else
	{

		while(n >= 0 && digits[n] == 9)
		{
			digits[n] = 0 ;
			n--;
		}

		if (n < 0 )
		{
			digits[n+1] = 1 ;
			digits.push_back(0);
		}
		else
		{
			digits[n] += 1 ;
		}

	}

	return digits;
        
    }
};