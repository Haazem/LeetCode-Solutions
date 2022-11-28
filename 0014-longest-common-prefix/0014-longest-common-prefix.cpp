class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
	int n = strs.size();
	if(n == 1 )
		return strs[0];

	string ans = "";

	int m1 = strs[0].size();
	int m2 = strs[1].size();
	int min_len = min(m1 , m2);
	for (int j = 0 ; j < min_len ; j ++ ){
		if(strs[0][j] == strs[1][j]){
			ans += strs[0][j];
		}else
			break;
	}

	for(int i = 2 ; i < n ; i ++ ){
		string temp = "";

		for(int j = 0 ; j < (int)strs[i].size() ; j++){

			if(ans[j] == strs[i][j]){
				temp += ans[j];

			}else
				break;
		}
		ans = temp;
	}


	return ans;
    }
};