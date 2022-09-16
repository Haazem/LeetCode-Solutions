class Solution {
public:
    
    
void dfs(int index , int target ,int total, vector<int>& temp , vector<int>& candidates ,vector<vector<int>>& ans ){

	if (total == target){
		ans.push_back(temp);
		return;
	}
	if (total > target || index >= (int)candidates.size()){
		return;
	}

	temp.push_back(candidates[index]);
	dfs(index+1,target,total+candidates[index],temp,candidates,ans);
	temp.pop_back();

	while (index+1 < (int)candidates.size() && candidates[index] == candidates[index+1]){

		index++;
	}

	dfs(index+1,target,total,temp,candidates,ans);

}

    
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        
        sort(candidates.begin() , candidates.end());
	vector<vector<int>> ans ;
	vector<int> temp;

	dfs(0,target,0,temp,candidates,ans);

	return ans;

        
    }
};