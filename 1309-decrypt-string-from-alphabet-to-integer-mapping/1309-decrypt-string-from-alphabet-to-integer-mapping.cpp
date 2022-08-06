class Solution {
public:
    string freqAlphabets(string s) {
        	int n = s.size();
	string ans = "";
	for (int i = 0 ; i < n ; i ++ ){

		if(s[i] == '1' || s[i] == '2')
		{
			if(s[i+2] == '#')
			{
				int num = (s[i] - '0') * 10;
					num += (s[i+1] - '0');
					char k = char(96) + num;
					ans += k ;
					i+=2;

			}
			else
			{
				int num = s[i] - '0';
				char k = char(96) + num;
				ans += k ;
			}

		}

		else
		{
			int num = s[i] - '0';
			char k = char(96) + num;
			ans += k ;

		}


	}

return ans;
    }
};