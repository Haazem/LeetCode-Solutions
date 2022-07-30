class Solution {
public:
    int subtractProductAndSum(int n) {
        	long long sm = 0 ;
	long long mul = 1 ;
	while(n)
	{
		sm += n % 10 ;
		mul *= n % 10;
		n /= 10;
	}
	return mul - sm;
    }
};