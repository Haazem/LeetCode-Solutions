class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
      map<char , int> mp;
for (int i = 0 ; i < (int) order.size() ; i ++ )
{
	mp[order[i]] = i ;
}

int n = words.size();
bool ok = true;
for (int i = 0 ; i < n-1 ; i ++)
{
	string s1 = words[i];
	string s2 = words[i + 1];
	string s3 = "";
	string s4 = "";
	int mn = min(s1.size() , s2.size());
	for (int j = 0 ; j < mn ; j ++)
	{
		s3 += s1[j];
		s4 += s2[j];
		if (mp[s1[j]] < mp[s2[j]])
		{
			break;
		}
		else if (mp[s1[j]] > mp[s2[j]])
		{
			return false ;
		}

	}
	if(ok && s3 == s4)
	{
		if(s1.size() > s2.size())
			return false ;
	}

}


return true;
  
    }
};