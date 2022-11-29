class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        
        
        
	vector<vector<int>> ans;
	ans.push_back({1});

	for(int i = 0 ; i < numRows - 1; i ++ ){
		vector<int> temp;
		temp.push_back(0);
		for(auto k : ans[i]){
			temp.push_back(k);
		}
		temp.push_back(0);
		vector<int> new_row;
		for(int j = 0 ; j < (int)ans[i].size() + 1 ; j ++){
			new_row.push_back(temp[j] + temp[j + 1]);
		}

		ans.push_back(new_row);
	}

	return ans;
        
        
    }
};