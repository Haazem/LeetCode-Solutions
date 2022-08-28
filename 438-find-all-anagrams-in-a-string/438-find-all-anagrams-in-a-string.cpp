class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        	int n = s.size();
	int m = p.size();
	vector<int> ans;
	if (m > n) return ans;

	map<char , int> mp1;
	map<char , int> mp2;

	for(int i = 0 ; i < m ; i ++ )
	{
		mp1[p[i]] +=1;
		mp2[s[i]] +=1;
	}

	int l = 0 ;
	if(mp1 == mp2)ans.push_back(0);
	for(int i = m ; i < n ; i ++)
	{
		mp2[s[i]] +=1;  // add new item
		mp2[s[l]] -=1;  //
		if(mp2[s[l]] == 0 )
		{
			mp2.erase(s[l]);
		}
		l++;
		if(mp1 == mp2)ans.push_back(l);

	}


	return ans;
    }
};