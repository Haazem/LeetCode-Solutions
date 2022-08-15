class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = needle.size();
	if (n == 0 )return 0;
	if (haystack == needle) return 0;
	int m = haystack.size();
	for (int i = 0 ; i < m ; i ++ )
	{
		if (haystack[i] == needle[0])
		{
			bool ok = true;
			int c = i , ans = i ;
			for (int j = 0 ; j < n ; j ++ )
			{
				if (haystack[c] == needle[j])
				{
					c++;
				}
				else
				{
					ok = false ;
					break;
				}
			}
			if (ok)
				return ans;
		}
	}

	return -1;

    }
};