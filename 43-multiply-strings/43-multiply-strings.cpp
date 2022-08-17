class Solution {
public:
    
void reverse(string &s)
{
	int n = s.size();
	int a = 0 , b = n-1;
	while(a < b)
	{
		swap(s[a],s[b]);
		a++;
		b--;
	}
}

string solve(string s , int a )
{
	int n = s.size();
	string res = "";
	int c = 0 ;
	for(int i = n-1 ; i >= 0 ; i --)
	{
		int x = (s[i]-'0')*a + c ;
		res += to_string(x%10);
		c = x / 10;
	}
	if(c)
	{
		res += to_string(c);
	}
	reverse(res);
	return res;
}

string add (string s1 , string s2)
{

	if(s1.length() < s2.length())
		swap(s1 , s2);

	int n = s1.size();
	int m = s2.size();
	int c = 0 ;
	string res = "";
	int i = n-1 , j = m-1;
	while(i>=0)
	{
		int x = (s1[i] -'0') + (j>=0 ? (s2[j]-'0') : 0) + c;
		res += to_string(x % 10);
		c = x / 10;
		i--;
		j--;
	}
	if(c)
		res += to_string(c);
	reverse(res);
	return res;
}
    
    string multiply(string num1, string num2) {
    
        
        
int m = num2.length();
string zero = "";
if(num1 == "0" || num2 == "0")
	return "0";

string ans = "";
for (int i = m - 1 ; i >=0 ; i--)
{
	int a = num2[i] - '0';
	string cur = solve(num1 , a);
	cur += zero;
	zero += "0";
	ans = add(ans , cur);
}
return ans;

        
        
    }
};