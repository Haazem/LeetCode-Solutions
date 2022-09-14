class Solution {
public:
    
    
vector<vector<int>> res;

void dfs(vector<int>& nums , vector<int> perm , map<int , int> hash){

	if((int)perm.size() == (int)nums.size()){
		res.push_back(perm);
		return ;
	}

	for (auto i : hash){
		if (i.second > 0 ){
			perm.push_back(i.first);
			hash[i.first] --;

			dfs(nums , perm , hash);

			hash[i.first] ++;
			perm.pop_back();

		}
	}

}


    
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        
	vector<int> perm;
	map<int , int> hash;
	for (int i : nums){
		hash[i] ++;
	}

	dfs(nums , perm , hash);

	return res;

    }
};