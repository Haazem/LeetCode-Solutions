class Solution {
public:
    bool isHappy(int n) {
        	set<int> st ;
	int cur_sum = 0 ;
	while(true)
	{
		auto i = st.find(n);
		if (i != st.end())
		{
			return false ;
		}
		else
		{
			st.insert(n);
			cur_sum = 0 ;
			while(n)
			{
				int d = n % 10;
				cur_sum += (d * d);
				n/=10;
			}
			if (cur_sum == 1)
				return true;
			n = cur_sum;

		}


	}


return true;

    }
};