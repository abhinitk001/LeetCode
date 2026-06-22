#include <iostream>
#include <vector>
#include <string>
using namespace std;


class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int len=arr.size();
        if(len%2==0){
            for(int i=0;i<len;i++){
                
            }
        }
    }
};
int main() {
    Solution s1;
    vector<int> arr={12,23,43,211};
    int result=s1.sumOddLengthSubarrays(arr);
    // for(int x:result)
    cout << result << " ";
    return 0;
}
/*
DSA Learning Notes:

Problem: Sum of All Odd Length Subarrays

What I Learned:

1. Understanding Subarrays
   - A subarray consists of contiguous elements.
   - Different from subsequences, where elements
     need not be adjacent.

2. Brute Force Approach
   - Generate all possible subarrays.
   - Check if length is odd.
   - Add their sum to the answer.
   - Time Complexity = O(n³)
       (start index + end index + sum calculation)

3. Prefix Sum Optimization
   - Precompute prefix sums.
   - Subarray sum can be found in O(1).
   - Time Complexity improves to O(n²).

4. Contribution Technique (Advanced)
   - Instead of generating all subarrays,
     determine how many odd-length subarrays
     contain each element.
   - Contribution of arr[i]:
       arr[i] × (number of odd subarrays containing it)
   - Time Complexity = O(n).

5. Pattern Recognition
   - Problems involving repeated subarray sums often
     suggest:
       ✓ Prefix Sum
       ✓ Sliding Window
       ✓ Contribution Technique

Complexity Comparison:
- Brute Force       : O(n³)
- Prefix Sum        : O(n²)
- Contribution Math : O(n)

Interview Takeaway:
Whenever a problem asks for the sum of many subarrays,
avoid recalculating sums repeatedly.
Think about Prefix Sums or Contribution-based counting.
*/
