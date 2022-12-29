class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        	int n = (int)numbers.size();
	int l = 0 , r = n - 1;
	vector<int> ans;

	while(l < r){
		int sum = numbers[l] + numbers[r];

		if(sum > target){
			r --;
		}
		else if (sum < target){
			l ++;
		}

		else {
			ans = {l+1 , r+1};
			break;
		}

	}

	return ans;

        
        
    }
};