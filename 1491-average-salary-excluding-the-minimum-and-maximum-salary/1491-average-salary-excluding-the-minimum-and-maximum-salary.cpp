class Solution {
public:
    double average(vector<int>& salary) {
        int mn = 1000009;
	int mx = -1;
	int n = salary.size();
	double sm = 0 ;
	for (int i = 0 ; i < n ; i ++ )
	{
		 mn = min(salary[i] , mn);
		 mx = max(salary[i] , mx);
		 sm += salary[i];
	}

	cout << std::fixed;
	cout << std::setprecision(5);
	return (sm - (mn + mx)) / (n - 2);
    }
};