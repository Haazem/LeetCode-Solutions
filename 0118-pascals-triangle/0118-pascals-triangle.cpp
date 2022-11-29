class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        
        	vector<vector<int>> ans;
	if(numRows == 1)
	{
		ans.push_back({1});

	}else if (numRows == 2){
		ans.push_back({1});
		ans.push_back({1 , 1});

	}else {

		ans.push_back({1});
		ans.push_back({1 , 1});

		for(int i = 2 ; i < numRows ; i ++){
			vector<int> v;
			v.push_back(1);
			for(int j = 0 ; j < (int)ans[i-1].size() - 1; j ++ ){

				v.push_back(ans[i-1][j] + ans[i-1][j + 1]);

			}
			v.push_back(1);
			ans.push_back(v);
		}
	}

	return ans;

        
    }
};