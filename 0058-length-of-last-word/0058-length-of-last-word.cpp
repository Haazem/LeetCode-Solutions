class Solution {
public:
    int lengthOfLastWord(string s) {
        
		string temp = "";
		int n = (int)s.size();

		for(int i = n-1 ; i >= 0 ; i--){

			if((int)temp.size() > 0 && s[i] == ' ')
				break;
			else{
				if(s[i] == ' ')
					continue;
				else
					temp += s[i];
			}

		}

	return (int)temp.size();
    }
};