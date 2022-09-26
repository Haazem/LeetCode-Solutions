class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
	int n = nums.size();
	vector<int> ans(n , 1);
	vector<int> prefix(n , 1);
	vector<int> postfix(n , 1);

	int p1 = 1 ;
	int p2 = 1 ;
	for (int i = 0 ; i < (int)nums.size() ; i ++)
	{
		prefix[i] = nums[i] * p1;
		p1 *= nums[i];
	}

	for (int i = n-1 ; i >= 0 ; i--){
		postfix[i] = nums[i] * p2 ;
		p2 *= nums[i];
	}

	for (int i = 0 ; i < n ; i ++ ){

		if (i == 0){
			ans[i] = postfix[i+1];
		}
		else if (i == n-1){
			ans[i] = prefix[i-1];
		}
		else
			ans[i] = prefix[i-1] * postfix[i+1];
	}


	return ans;

    }
};