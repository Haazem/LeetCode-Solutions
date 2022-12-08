class Solution {
public:
    int maxNumberOfBalloons(string text) {
        
        
	map<char , int > text_count;
	map<char , int> balloon_count;

	string temp = "balloon";

	for(int i = 0 ; i < (int)text.length() ; i ++ ){
		text_count[text[i]] ++;
	}

	for(int i = 0 ; i < (int)temp.length() ; i ++){
		balloon_count[temp[i]] ++;
	}

	int res = (int) text.length();

	for(auto i: balloon_count){
		res = min(res , text_count[i.first] / balloon_count[i.first]);

	}

	return res;
        
        
    }
};