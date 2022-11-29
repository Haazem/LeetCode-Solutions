class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        
        	int cnt = 0;

	for(int i = 0 ; i < (int)nums.size() ; i ++ ){
		if(nums[i] == val){
			nums[i] = 150;
		}else
			cnt++;
	}

	sort(nums.begin() , nums.end());

	for(auto k : nums){
		cout <<k<<endl;
	}

	return cnt;
        
    }
};