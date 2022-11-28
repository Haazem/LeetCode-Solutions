class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        	string ans = "";
	for(int i = 0 ; i < (int) strs[0].size() ; i ++ ){

		for(auto s : strs){

			if((int)s.size() == i || strs[0][i] != s[i])
				return ans;
		}
		ans += strs[0][i];
	}

	return ans;
        
        
    }
};