class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        
        
	int n = (int)nums.size();
	vector<int> prefix_sum(n , 0);
	prefix_sum[0] = nums[0];

	for(int i = 1 ; i < n ; i ++){

			prefix_sum[i] = prefix_sum[i-1] + nums[i];
	}

	for(int i = 0 ; i < n ; i ++){
		int left_sum = 0 , right_sum = 0;

		if(i == 0){

			right_sum = prefix_sum[n-1] - nums[i];
			if(right_sum == 0)
				return i;
		}
		else if(i == n-1){

			left_sum = prefix_sum[i-1];
			if(left_sum == 0)
				return i;
		}
		else{

			left_sum = prefix_sum[i-1];
			right_sum = prefix_sum[n-1] - left_sum - nums[i];

			if(left_sum == right_sum)
				return i;
		}

	}

	return -1;

        
    }
};