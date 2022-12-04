class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        
        
	int n = (int)nums1.size();
	map<int , int>mp;
	for(int i = 0 ; i < n ; i ++ ){
		mp[nums1[i]] = i; // val , idx
	}

	vector<int>ans(n , -1);
	stack<int> s;

	for(int i = 0 ; i < (int)nums2.size(); i ++){
		int cur_val = nums2[i];

		while(!s.empty() && cur_val > s.top()){
			int top_val = s.top();
			s.pop();
			int idx = mp[top_val];
			ans[idx] = cur_val;
		}

		if(mp.find(cur_val) != mp.end()){
			s.push(cur_val);
		}
	}

	return ans;
        
        
    }
};