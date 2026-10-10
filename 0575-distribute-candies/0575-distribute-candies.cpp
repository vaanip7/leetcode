#include <vector>
#include <bitset>
#include <algorithm>

using namespace std;

class Solution {
 public:
  int distributeCandies(vector<int>& candies) {
    bitset<200001> candyBits;

    for (const int candy : candies) {
      candyBits.set(candy + 100000);
    }

    return min(candies.size() / 2, candyBits.count());
  }
};