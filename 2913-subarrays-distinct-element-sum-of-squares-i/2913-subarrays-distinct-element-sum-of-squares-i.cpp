#include <vector>
#include <unordered_set>

class Solution {
public:
    int sumCounts(std::vector<int>& nums) {
        int res = 0;
        int n = nums.size();
        
        for (int i = 0; i < n; ++i) {
            std::unordered_set<int> distinct_set;
            for (int j = i; j < n; ++j) {
                distinct_set.insert(nums[j]);
                int count = distinct_set.size();
                res += count * count;
            }
        }
        
        return res;
    }
};
