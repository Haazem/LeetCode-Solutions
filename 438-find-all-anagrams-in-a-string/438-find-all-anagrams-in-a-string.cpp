class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        
	int n = (int)s.size();
	int m = (int)p.size();
	vector<int> v ;

	if (m > n) return v ;

	map<char , int> mp1 ;
	map<char , int> mp2 ;

	for (int i = 0 ; i < m ; i ++ ){
		mp1[p[i]] ++;
		mp2[s[i]] ++;
	}

	if (mp1 == mp2 ) v.push_back(0);

	int cnt = 0;
	for (int i = m ; i < n ; i ++ ){

		mp2[s[i]] ++;
		mp2[s[cnt]]--;
		if(mp2[s[cnt]] == 0) mp2.erase(s[cnt]);

		if(mp1 == mp2) v.push_back(i-m+1);

		cnt ++;
	}

	return v ;
    }
};