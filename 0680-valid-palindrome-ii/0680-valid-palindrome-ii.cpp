class Solution {
public:
    bool validPalindrome(string s) {
        
        	int l = 0 , r = (int)s.length()-1;
	int c = 0;
	while(l < r){
		if (s[l] == s[r])
		{
			l++;
			r--;
		}
		else{
			r --;
			c ++;
			if (c > 1)
				break;
		}
	}

	int c2= 0;
	l = 0 ,r = (int)s.length()-1;
	while(l < r){
		if (s[l] == s[r])
		{
			l++;
			r--;
		}
		else{
			l ++;
			c2 ++;
			if (c2 > 1)
				break;
		}
	}

	if (c <= 1 || c2 <= 1)
		return true;
	else
		return false;

        
        
    }
};