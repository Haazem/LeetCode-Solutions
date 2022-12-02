class Solution {
public:
    bool isIsomorphic(string s, string t) {
        
        
        	int m = (int)t.size();
	string temp = "";
	map<char , int>mp1;
	map<char , char>mp2;
	for(int i = 0 ; i < m ; i ++){

		if(mp1[t[i]] != 1){
			mp1[t[i]] = 1;
			mp2[s[i]] = t[i];
		}
		else {
			continue;
		}

	}

	for(int i = 0 ; i < m ; i ++){
		s[i] = mp2[s[i]];
	}

	return s == t;
        
    }
};