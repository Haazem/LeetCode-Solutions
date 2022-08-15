class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int n = s.size();
	if (n == 1)
		return false;

	string temp = "";
	for (int i = 0 ; i < n -1; i ++ )
	{
		temp += s[i];
		//cout <<"temp = " << temp << endl;
		int m = temp.size();
		if (n % m == 0)
		{
			int k = n / m ;
			string x = temp;
			for (int j = 0 ; j < k-1 ; j ++ )
			{
				x += temp;
			}
			//cout << x << endl;
			if (x == s )
				return true;

		}
	}

	return false ;
    }
};