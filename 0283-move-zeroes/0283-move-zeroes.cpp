class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
        	int l =0 ;

	for(int i = 0 ; i < (int)nums.size() ; i++){

		if(nums[i] != 0){
			nums[l ++] = nums[i];
		}
	}

	for(int i = l ; i < (int)nums.size(); i ++){
		nums[i] = 0;
	}
        
        
        
    }
};