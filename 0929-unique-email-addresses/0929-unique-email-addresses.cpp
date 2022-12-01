class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        
        	int cnt = 0;
	int n = (int)emails.size();
	set<string> st;

	for(int i = 0 ; i < n ; i ++){
		string temp = "";
		int j = 0;
		bool flag = false;
		while(j < (int)emails[i].size()){

			if(!flag && emails[i][j] != '.' && emails[i][j] != '+' && emails[i][j] != '@')
			{
				temp += emails[i][j];
				j++;
			}
			else if (!flag){
				if(emails[i][j] == '@')
				{
					break;
				}
				else if (emails[i][j] == '.'){
					j++;
				}
				else {
					flag = true;
					j++;
				}
			}
			else{
				if(emails[i][j] == '@')
				{
					break;
				}
				else{
					j++;
				}
			}

		}

		//cout << "j = " << j << endl;

		while(j < (int)emails[i].size()){
			temp += emails[i][j];
			j ++;
		}

		//cout << temp << endl;

		st.insert(temp);
	}


	cnt = (int)st.size();
	return cnt;

        
        
    }
};