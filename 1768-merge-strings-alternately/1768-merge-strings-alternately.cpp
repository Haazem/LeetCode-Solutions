class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        
	int n = word1.size();
	int m = word2.size();
	int k = min(n ,  m );
	string ans = "";
	for (int i = 0 ; i < k ; i ++ )
	{
		ans += word1[i];
		ans += word2[i];

	}


	for (int i = k ; i < (int) word1.size() ; i ++ )
	{
		ans += word1[i];
	}

	for (int i = k ; i < (int) word2.size() ; i ++ )
	{
			ans += word2[i];
	}

	return ans ;


    }
};