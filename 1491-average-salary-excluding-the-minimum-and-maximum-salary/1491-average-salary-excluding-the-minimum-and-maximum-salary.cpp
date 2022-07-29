class Solution {
public:
    double average(vector<int>& salary) {
        int min = *min_element(salary.begin(), salary.end());
	int max = *max_element(salary.begin() , salary.end());
	int n = salary.size();
	double sm = 0 ;
	for (int i = 0 ; i < n ; i ++ )
	{
	 if(salary[i] == min || salary[i] == max)
		 continue;
	 else
		 sm += salary[i];
	}

	cout << std::fixed;
	cout << std::setprecision(5);
	return sm / (n - 2);
    }
};