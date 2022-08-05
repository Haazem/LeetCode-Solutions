class Solution {
public:
    char findTheDifference(string s, string t) {
        int n = s.size();
	int m = t.size();
	map<char , int> mp , mp2 ;
	char c ;
	for (int i = 0 ; i < n ; i ++ )
	{
		mp[s[i]] ++;
	}

	for (int i = 0 ; i < m ; i ++ )
	{
		mp2[t[i]] ++;

	}

	for (auto i : t)
	{
		if (mp[i] == 0 || mp2[i] > mp[i])
		{
			c = i ;
		}
	}

	return c;
    }
};