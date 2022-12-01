class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        
        	int ans = 0;
	set<string> s;

	for(auto e : emails){
		string local = "";
		string domain = "";

		int j = 0;
		while(e[j] != '@' && e[j] != '+'){
			if(e[j] != '.')
				local += e[j];
			j++;
		}

		while(e[j] != '@'){
			j ++;
		}

		while(j < (int) e.size()){
			domain += e[j];
			j++;
		}

		string res = local + domain;
		s.insert(res);

	}


	ans = (int)s.size();
	return ans;
        
        
        
    }
};