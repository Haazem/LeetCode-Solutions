class NumArray {
public:
  vector<int> v ;

    NumArray(vector<int>& nums) {
        v = nums;
		for (int i = 1 ; i < (int) v.size() ; i ++ )
		 {
				v[i] += v[i - 1];
		 }

    }

    int sumRange(int left, int right) {
    
		int sum = v[right];
		
		if(left > 0 )
		{
			sum -= v[left - 1];
		}

    		return sum;
    	

    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */