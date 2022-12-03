class Solution {
public:
   
    int findNextGreater(vector<int>& nums2 , int index){

	for(int i = index + 1 ; i < (int)nums2.size() ; i ++){
		if(nums2[i] > nums2[index]){
			return nums2[i];
		}
	}
        return -1;
    }



    
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        
        
   vector<int> ans;
	map<int , int>mp;
	for(int i = 0 ; i < (int) nums2.size() ; i ++){
		mp[nums2[i]] = findNextGreater(nums2, i);
	}

	
	for(int i = 0 ; i < (int)nums1.size() ; i ++){
		ans.push_back(mp[nums1[i]]);
	}


	return ans;

        
        
    }
};