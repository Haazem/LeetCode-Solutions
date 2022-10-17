class Solution {
public:
    bool isValid(string s) {
     
        
	stack<char> stc;
	for(auto i : s){
		if (i == '(' || i == '{' || i == '['){
			stc.push(i);
		}else{
			if(stc.empty()){
				{
				return false;
				}
			}else{

				if(i == ')' && stc.top() == '('){
					stc.pop();
				}
				else if(i == ']' && stc.top() == '[')
					stc.pop();
				else if(i == '}' && stc.top() == '{')
					stc.pop();
				else
					return false;
			}
		}
	}

	if (stc.empty())
		return true;
	return false;

    }
};