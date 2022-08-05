class Solution {
public:
    char findTheDifference(string s, string t) {
        int sum1 = 0 , sum2 = 0 ;
	for (int i = 0 ; i < (int) s.size() ; i ++ )
	{
		sum1+= int(s[i]) ;
	}

	for (int i = 0 ; i < (int) t.size() ; i ++ )
	{
			sum2+= int(t[i]) ;
	}


	int diff = sum2 - sum1 ;

	return char(diff);
    }
};