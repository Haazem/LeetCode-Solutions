class Solution {
public:
    
    
void backtrack(int index , vector<int>& nums ,vector<int> subset,vector<vector<int>>& res){

	if(index == (int) nums.size()){
		res.push_back(subset);
		return;
	}

	subset.push_back(nums[index]);
	backtrack(index + 1 , nums , subset , res);
	subset.pop_back();

	while(index+1 < (int)nums.size() && nums[index] == nums[index+1]){
		index ++;
	}

	backtrack(index + 1 , nums , subset ,res);

}


    
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {

            	vector<vector<int>> res ;
	vector<int> subset;

	sort(nums.begin() , nums.end());
	backtrack(0 , nums , subset , res);


	return res;

        
    }
};