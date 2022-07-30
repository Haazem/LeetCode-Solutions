class Solution {
public:
    int hammingWeight(uint32_t n) {
        	int count = 0 ;
	while(n)
	{
		int digit = n & 1 ;
		if (digit == 1 )
			count ++;

		n >>= 1 ;
	}
	return count ;
    }
};