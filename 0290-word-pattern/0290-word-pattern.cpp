class Solution {
public:
    bool wordPattern(string pattern, string s) {
        
        
		map<string , char> mp1;
		map<char , char> mp2;

		vector<string> v1;
		string temp = "";

		for(int i = 0 ; i < (int)s.length() ; i ++ ){
			if(s[i] == ' ')
			{
				v1.push_back(temp);
				temp = "";
			}else
				temp += s[i];
		}

		if((int)temp.length() != 0)
			v1.push_back(temp);

		int n = (int)v1.size();
		int m = (int)pattern.length();
		if (n != m)
			return false;

		char k = 'a' , k2 = 'a';

		for(int i = 0 ; i < n ; i ++){
			if(mp1.count(v1[i]) > 0 )
				continue;
			else
			{
				mp1[v1[i]] = k;
				k++;
			}

			if(mp2.count(pattern[i]) > 0)
				continue;

			else
			{
				mp2[pattern[i]] = k2;
				k2++;
			}

		}


		for(int i = 0 ; i < n ; i ++ ){
			char x = mp1[v1[i]];
			char y = mp2[pattern[i]];

			if(x != y)
				return false;
		}

	return true;
        
    }
};