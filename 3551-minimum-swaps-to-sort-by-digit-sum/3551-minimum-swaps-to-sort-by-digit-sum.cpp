class Solution {
public:
    int getDigitSum(int x) {
        int sum = 0;
        while (x > 0) {
            sum += x % 10;
            x /= 10;
        }
        return sum;
    }

    int minSwaps(vector<int>& nums) {
        int n = nums.size();
    
        vector<int> sortedNums = nums;
        auto comp = [&](int a, int b) {
            int sumA = getDigitSum(a);
            int sumB = getDigitSum(b);
            if (sumA != sumB) return sumA < sumB;
            return a < b;
        };
        sort(sortedNums.begin(), sortedNums.end(), comp);
        unordered_map<int, int> targetIndex;
        for (int i = 0; i < n; ++i) {
            targetIndex[sortedNums[i]] = i;
        }
        
        vector<bool> visited(n, false);
        int swaps = 0;
        
        for (int i = 0; i < n; ++i) {
            if (visited[i] || targetIndex[nums[i]] == i) {
                continue;
            }
            
            int cycleSize = 0;
            int curr = i;
            while (!visited[curr]) {
                visited[curr] = true;
                curr = targetIndex[nums[curr]];
                cycleSize++;
            }
            
            if (cycleSize > 1) {
                swaps += (cycleSize - 1);
            }
        }
        
        return swaps;
    }
};