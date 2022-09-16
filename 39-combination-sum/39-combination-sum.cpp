class Solution {
public:
    
    void dfs(int index , vector<int>& temp , int total , int target , vector<int>& candidates, vector<vector<int>>& ans){

	if (total == target){
		ans.push_back(temp);
		return;
	}
	if (index >= (int)candidates.size() || total > target){
		return ;
	}

	temp.push_back(candidates[index]);
	dfs(index  , temp , total + candidates[index] , target , candidates , ans);

	temp.pop_back();
	dfs(index+1, temp , total , target , candidates , ans);
}
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        
	vector<vector<int>> ans ;
	vector<int> temp ;

	dfs(0 , temp , 0 , target , candidates , ans);

	return ans;

    }
};