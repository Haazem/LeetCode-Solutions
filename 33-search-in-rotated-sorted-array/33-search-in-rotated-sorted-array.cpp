class Solution {
public:
    
    int do_BinSearch(vector<int>& nums ,int target){
	vector<int> temp;
	temp = nums;
	sort(temp.begin() , temp.end());

	int l = 0 , r = temp.size()-1;
	int mid ;
	while(l <= r){
		mid = (l + r) / 2 ;
		if(temp[mid] > target){
			r = mid - 1;
		}
		else if (temp[mid] < target){
			l = mid + 1;
		}
		else
			return mid;
	}
	return -1;
}
    int search(vector<int>& nums, int target) {
        
	int n = nums.size();
	int k1 = 0 , k2 = 0 ;
	map<int , int> mp;
	bool flage = false;
	for (int i = 0 ; i < n-1 ; i ++ )
	{
		if(nums[i] > nums[i+1])
		{
			mp[nums[i]] = 1;
			k1 = i+1;
			flage = true;
			break;
		}
		else
			mp[nums[i]] = 1;
	}


	k2 = n - k1;

	int r = do_BinSearch(nums, target);
	if (r == -1)return -1;
	if(!flage) return r ;
	int ans = 0 ;
	if(mp[target] == 1){
		ans = r - k2;
	}
	else {
		ans = r + k1;
	}

	return ans ;
    }
};