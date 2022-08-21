class Solution {
public:
    string addBinary(string a, string b) {
        	string ans = "";
	int n = a.length();
	int m = b.length();
	int div = 0 ;
	int i = n-1 , j = m-1;
	while(div >0 or i>=0 or j>=0){
		int sum = 0 ;

		if(i>=0){
			sum += a[i--]-'0';
		}
		if(j>=0)
		{
			sum += b[j--]-'0';
		}
		if(div > 0 )
		{
			sum+=div;
		}
		div = sum / 2;
		int rem = sum % 2;
		ans += (rem+'0');
	}

	reverse(ans.begin() , ans.end());
	return ans;
    }
};