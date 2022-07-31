class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
         sort(nums.begin(),nums.end());
    int sm=0;
    int n = nums.size();
    for(int i=n-3;i>=0;i--){

        sm=nums[i]+nums[i+1]+nums[i+2];
        if(nums[i]+nums[i+1] > nums[i+2]){
            return sm;
        }
    }
    return 0;
    }
};