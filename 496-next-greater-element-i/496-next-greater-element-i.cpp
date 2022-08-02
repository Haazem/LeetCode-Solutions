class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
   	map<int , int> mp1 ;
	int n = nums1.size();
	int m = nums2.size();

	for (int i = 0 ; i < m ; i ++ )
	{
		mp1[nums2[i]] = -1;
		for (int j = i + 1 ; j < m ; j ++ )
		{
			if (nums2[j] > nums2[i])
			{
				mp1[nums2[i]] = nums2[j];
				break;
			}
		}
	}

	vector<int> res ;
	for (int i = 0 ; i < n ; i ++ )
	{
		res.push_back(mp1[nums1[i]]);
	}

	return res ;     
    }
};