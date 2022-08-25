class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
    sort(strs.begin() , strs.end());
	int n = strs.size();
	vector<vector<string>> res ;
	map<string , vector<string>> mp ;
	for(int i = 0 ; i < n ; i ++ )
	{
		string temp = strs[i];
		sort(temp.begin() , temp.end());
		mp[temp].push_back(strs[i]);
	}

	for(auto i : mp)
	{
		res.push_back(i.second);
	}

	return res;
    }
};