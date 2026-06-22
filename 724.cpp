#include <iostream>
#include <vector>
#include <string>
using namespace std;
/*
DSA Learning Notes:

Problem: Find the Pivot Index of an array.

Key Idea:
A pivot index is an index where:
    Sum of elements on the left
        ==
    Sum of elements on the right

What I Learned:

1. Prefix Sum Concept
   - Instead of calculating left and right sums repeatedly,
     maintain a running leftSum.

2. Mathematical Optimization
   - rightSum can be calculated as:
         totalSum - leftSum - nums[i]
   - No need for another loop.

3. Time Complexity Improvement
   - Brute Force:
         For every index, calculate left and right sums.
         Time Complexity = O(n²)
   - Optimized Approach:
         One pass for totalSum and one pass for pivot check.
         Time Complexity = O(n)

4. Space Optimization
   - Uses only a few variables.
   - Space Complexity = O(1)

5. Important DSA Concept
   - Prefix sums help solve range-sum problems efficiently.
   - Frequently used in arrays, competitive programming,
     and interview questions.

Interview Takeaway:
Whenever a problem involves repeated sum calculations,
think about Prefix Sum or Running Sum techniques before
using nested loops.
*/
class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int totalSum = 0;
        
        // Calculate total sum
        for(int num : nums) {
            totalSum += num;
        }
        
        int leftSum = 0;
        for(int i = 0; i < nums.size(); i++) {
            // rightSum = totalSum - leftSum - nums[i]
            int rightSum = totalSum - leftSum - nums[i];
            
            if(leftSum == rightSum) {
                return i;  // Found pivot index
            }
            
            leftSum += nums[i];  // Add current to left sum
        }
        
        return -1;  // No pivot found
    }
};

int main() {
    Solution s1;
    vector<int> nums={1,1,1,1,1};
    int result=s1.pivotIndex(nums);
    // for(int x:result)
    cout << result << " ";
    return 0;
}

