class Solution {
public:
    void reverseString(vector<char>& s) {
        
        
	int l = 0, r = (int)s.size()-1;

	while(l < r){
		char temp = s[r];
		s[r] = s[l];
		s[l] = temp;
		l++;
		r--;
	}

        
    }
};