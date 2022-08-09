class NumArray {
public:
vector<int> v ;

    NumArray(vector<int>& nums) {
        v = nums;
    }
    
    int sumRange(int left, int right) {
    	
    	if(left <= right && right < (int) v.size())
    	{	
    		int sum= 0 ; 
    		for (int i = left ; i <= right ; i ++ )
    		{
    			sum += v[i];
    		}
    		return sum;
    	}
    	return 0 ;
    	
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */