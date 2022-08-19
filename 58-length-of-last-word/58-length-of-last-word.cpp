class Solution {
public:
    int lengthOfLastWord(string s) {
       	int n = s.length();
	string s2 = "";
	for (int i = n-1 ; i >= 0 ; i -- )
	{
		if (s[i] == ' ' && s2.length() == 0 )
			continue;
		else if (s[i] == ' ')
			break;
		else
			s2 += s[i];
	}
	//cout << s2 << endl;
	return s2.length();
 
    }
};