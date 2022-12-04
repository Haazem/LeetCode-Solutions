class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        int n = (int)nums.size();
	int k = n / 2;
	map<int , int>freq;
	for(int i = 0 ; i < n ; i ++ ){
		freq[nums[i]] ++;
		if(freq[nums[i]] > k)
			return nums[i];
	}

      return -1; 
        
    }
};