class Solution {

public:

    
bool solve(char c){

	if ( (int(c) >= 48 && int(c) <= 57) ||
		 (int(c) >= 65 && int(c) <= 90) ||
		 (int(c) >= 97 && int(c) <= 122) )
	{
		return true;
	}
	else
		return false;
}

    
    bool isPalindrome(string s) {
        
        
	int l = 0 ;
	int r = (int)s.size()-1 ;

	while(l < r ){

		while (l < r && !solve(s[l])){
			l ++;
		}

		while(r > l && !solve(s[r])){
			r--;
		}

		if (tolower(s[l]) != tolower(s[r])){
			return false ;
		}
		else {
			l++;
			r--;
		}
	}

	return true;

        
    }
};