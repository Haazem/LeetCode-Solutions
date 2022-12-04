class Solution {
public:
    int majorityElement(vector<int>& nums) {
     
     
	int res = nums[0];
	int count = 1;

	for(int i = 1; i < (int)nums.size() ; i ++){
		if(nums[i] == res)
			count ++;
		else {
			count -=1;
			if(count == 0)
			{
				res = nums[i];
				count = 1;
			}
		}
	}

	return res;
   
        
    }
};