class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        
        int ans = 100000009;
        sort(nums.begin(),nums.end());
        int n = (int)nums.size();
        int l = 0 , r = k-1;

        while(r < n){
            ans = min(ans, nums[r] - nums[l]);
            l++;
            r++;
        }

        return ans;

        
        
    }
};