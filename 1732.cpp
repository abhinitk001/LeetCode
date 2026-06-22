#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        for(int i=1;i<gain.size();i++){
            gain[i]=gain[i]+gain[i-1];
        }
        int maxVal = *max_element(gain.begin(), gain.end());
        if (maxVal<0)
        maxVal=0;
    return maxVal;
    }
};

int main() {
    Solution s1;
    vector<int> gain={-5,-2,-6,9};
    int result=s1.largestAltitude(gain);
    // for(int x:result)
    cout << result << " ";
    return 0;
}
/*
DSA Learning Notes:

Problem: Find the Highest Altitude

Key Observation:
- The journey starts at altitude 0.
- gain[i] represents the altitude change between points.
- Actual altitudes are obtained using cumulative sums.

What I Learned:

1. Prefix Sum Technique
   - Each position's altitude depends on all previous gains.
   - Running sum can be built as:
         gain[i] += gain[i-1];

2. Converting Changes into Actual Values
   Example:
       gain = [-5, -2, -6, 9]

       Altitudes:
       0
       -5
       -7
       -13
       -4

3. Finding Maximum Efficiently
   - After building prefix sums,
     use max_element() to find the highest altitude.

4. Important Edge Case
   - Starting altitude (0) must also be considered.
   - If all altitudes are negative,
     the highest altitude is still 0.

5. STL Learning
   - max_element(begin, end) returns an iterator.
   - Use:
         *max_element(...)
     to get the actual value.

Complexity Analysis:
- Prefix Sum Construction : O(n)
- Finding Maximum         : O(n)
- Total Complexity        : O(n)

Space Complexity:
- O(1) extra space
- Modified the input array in-place.

Possible Improvement:
- Compute running sum and maximum together
  in a single traversal without modifying the array.

Interview Takeaway:
Whenever values depend on previous elements,
think about:
    ✓ Prefix Sum
    ✓ Running Sum
    ✓ Cumulative Frequency

These patterns appear frequently in array problems.
*/