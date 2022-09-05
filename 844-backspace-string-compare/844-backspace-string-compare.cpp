class Solution {
public:
    bool backspaceCompare(string s, string t) {
        	int n = s.length() , m = t.length();
	stack<char> st , st2;

	for (int i = 0 ; i < n ; i ++ ){
		if (s[i] != '#')
			st.push(s[i]);
		else {
			if(st.size() > 0)
				st.pop();
		}
	}
	for (int i = 0 ; i < m ; i ++ ){
			if (t[i] != '#')
				st2.push(t[i]);
			else {
				if(st2.size() > 0)
					st2.pop();
			}
		}

	
	string temp1 = "" , temp2 = "";
	while(!st.empty()){
		temp1 += st.top();
		st.pop();
	}
	while(!st2.empty()){
		temp2 += st2.top();
		st2.pop();
	}

	reverse(temp1.begin() , temp1.end());
	reverse(temp2.begin() , temp2.end());

	if (temp1 == temp2)
		return true;
	else
		return false;
    }
};