class Solution {
public:
int ans=0;
    int minMoves(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int x=nums[n-1];
        for(int num:nums){
         ans+=abs(num-x);
            }
            return ans;    }
};