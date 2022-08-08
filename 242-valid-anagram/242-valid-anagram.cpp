class Solution {
public:
    bool isAnagram(string s, string t) {
        	if(s.size() != t.size())return false ;
	
	vector<int> x (26 , 0);
	vector<int> y (26 , 0);
	
	for (int i = 0 ; i < s.size() ; i ++ )
	{
		x[s[i] - 'a'] ++;
		y[t[i] - 'a'] ++;
	}
	
	return x == y;
    }
};