class Solution {
public:
    int hammingWeight(uint32_t n) {
        	int count = 0 ;
	for (int i = 0 ; i < 32 ; i ++ )
	{
		int x = (n & (1<<i));
		//cout << x << endl;
		if(x)
			++count ;
	}

	//cout << endl;
	return count ;
    }
};