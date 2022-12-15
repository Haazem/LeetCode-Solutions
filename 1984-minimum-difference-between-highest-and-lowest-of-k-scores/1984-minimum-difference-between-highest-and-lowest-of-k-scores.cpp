class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        
        
	int n = (int)nums.size();
	int ans = 100000000;
	sort(nums.begin(), nums.end());

	for (int i = 0 ; i < n - k + 1 ; i ++){
		vector<int> temp;
		temp.push_back(nums[i]);
		int k2 = k;
		k2--;
		for(int j = i+1; j < n ; j ++ ){
			if(k2 == 0) break;
			else {
				temp.push_back(nums[j]);
				k2 --;
			}
		}
		
		/*
		for(auto e : temp)
		{
			cout << e << " ";
		}cout << endl;
		 */
		
		int max_ele = *max_element(temp.begin(),temp.end());
		int min_ele = *min_element(temp.begin(), temp.end());

		ans = min(ans, max_ele - min_ele);
	}


return ans;
        
        
    }
};