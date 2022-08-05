class Solution {
public:
    string interpret(string command) {
        	string ans = "";
	int n = command.size();

	for (int i = 0 ; i < n ; i ++ )
	{
		if (command[i] == 'G')
		{
			ans += command[i];
		}
		else if (command[i] == '(' && command[i+1] == ')')
		{
			ans += 'o';
		}

		else if (command[i] == '(' && command[i+1] == 'a')
		{
			ans += "al";
		}
		else
			continue;

	}

	return ans ;
    }
};