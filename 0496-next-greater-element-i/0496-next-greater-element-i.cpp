class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        
        	vector<int> ans;
	int n = (int)nums1.size();
	int m = (int)nums2.size();

	map<int , int>mp;

	for(int i = 0 ; i < m ; i ++ ){
		mp[nums2[i]] = -1;

		for(int j = i+1 ; j < m ; j ++){
			if(nums2[j] > nums2[i]){
				mp[nums2[i]] = nums2[j];
				break;
			}
		}
	}


	for(int i = 0 ; i < n ; i ++ ){
		ans.push_back(mp[nums1[i]]);
	}

	return ans;
        
        
        
    }
};