#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int s=0;
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums.size();j++){
                if(nums[i]==nums[j] && i<j)
                s++;
            }
        }
        return s;
    }
};
int main() {
    Solution s1;
    vector<int> nums={1,1,1,1};
    int result=s1.numIdenticalPairs(nums);
    // for(int x:result)
    cout << result << " ";
    return 0;
}
/*
DSA Learning Notes:

Problem: Number of Good Pairs

A good pair is defined as:
    nums[i] == nums[j] and i < j

What I Learned:

1. Brute Force Comparison
   - Compare every element with every other element.
   - Check both conditions:
         nums[i] == nums[j]
         i < j
   - Count valid pairs.

2. Time Complexity Analysis
   - Two nested loops are used.
   - Time Complexity = O(n²).
   - Works for small inputs but becomes slow for large arrays.

3. Avoiding Duplicate Counting
   - Condition i < j ensures each pair is counted only once.
   - Without it, pairs would be counted twice.

4. Hash Map Optimization
   - Instead of checking all pairs,
     store frequencies of numbers.
   - When a number appears again,
     it forms a pair with all previous occurrences.

Optimized Idea:
    unordered_map<int,int> freq;
    int pairs = 0;

    for(int num : nums){
        pairs += freq[num];
        freq[num]++;
    }

Example:
    nums = [1,1,1,1]

    1st 1 -> 0 pairs
    2nd 1 -> +1 pair
    3rd 1 -> +2 pairs
    4th 1 -> +3 pairs

    Total = 6 pairs

Complexity Comparison:
- Brute Force : O(n²)
- Hash Map    : O(n)

Space Complexity:
- Brute Force : O(1)
- Hash Map    : O(n)

Interview Takeaway:
Whenever a problem asks for counting equal elements,
duplicates, frequencies, or pairs,
think about:
    ✓ Hash Map
    ✓ Frequency Counting
    ✓ Running Counts

These often reduce O(n²) solutions to O(n).
*/