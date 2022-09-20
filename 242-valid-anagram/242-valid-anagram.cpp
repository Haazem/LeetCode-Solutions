class Solution {
public:
    bool isAnagram(string s, string t) {
        
	int count1[30] = {0};
	int count2[30] = {0};

	for(int i = 0 ; i < (int)s.size() ; i ++){
			count1[s[i] - 'a'] ++;
	}
	for(int i = 0 ; i < (int)t.size() ; i ++){
		   count2[t[i] - 'a'] ++;
	}

	for (int i = 0 ; i < 30 ; i ++){
		if (count1[i] != count2[i])
			return false;
	}

	return true;

    }
};