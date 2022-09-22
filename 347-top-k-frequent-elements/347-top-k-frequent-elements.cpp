class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
	 	 	 int n = nums.size();
	        unordered_map<int, int> m;
	        for (int i = 0; i < n; i++) {
	            m[nums[i]]++;
	        }

	        vector<vector<int>> buckets(n + 1);
	        for (auto it = m.begin(); it != m.end(); it++) {
	            buckets[it->second].push_back(it->first);
	        }

	        vector<int> result;

	        for(int i = n ; i >=0 ; i--){
	        	if((int) result.size() == k)
	        		break;
	        	for(auto j : buckets[i]){
	        		result.push_back(j);
	        	}
	        }
	        return result;
    }
};