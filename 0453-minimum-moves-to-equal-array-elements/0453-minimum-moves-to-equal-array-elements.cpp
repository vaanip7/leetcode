class Solution {
public:
    int minMoves(vector<int>& nums) {
        int sum=0;
        int minn=1e9;
        int n =nums.size();
        for (int i :nums){
            minn=min(i,minn);
            sum+=i;
        }
        return sum- n *minn;
    }
};