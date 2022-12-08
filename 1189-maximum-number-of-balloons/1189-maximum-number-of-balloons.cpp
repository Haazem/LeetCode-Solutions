class Solution {
public:
    int maxNumberOfBalloons(string text) {
        
    int n = (int)text.size();
	map<char , int> mp;
	int res = 0;

	for(int i = 0 ; i < n ; i ++ ){
		mp[text[i]] ++;
		while(mp['b'] >= 1 && mp['a'] >= 1 && mp['l'] >= 2 && mp['o'] >= 2 && mp['n'] >= 1){
			res ++;
			mp['b'] -=1; mp['a']-=1; mp['l'] -=2 ; mp['o'] -=2; mp['n'] -= 1;
		}
	}

	return res;
        
        
    }
};