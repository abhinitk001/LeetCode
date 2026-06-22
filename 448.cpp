#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <unordered_set>
/*
DSA Learning Notes:

Problem: Find all missing numbers in the range [1, n].

My Mistakes:
1. I created an unordered_set correctly:
       unordered_set<int> numSet(nums.begin(), nums.end());

   but I did not use it during the search.

2. Instead of checking the set, I used:
       count(nums.begin(), nums.end(), i)

   This works, but it scans the entire vector every time,
   making the solution O(n²).

3. The purpose of unordered_set is to get O(1) average lookup:
       numSet.count(i)

4. My loop was:
       for(int i = 1; i < nums.size(); i++)

   This misses the last number n.
   Correct:
       for(int i = 1; i <= nums.size(); i++)

DSA Concepts Learned:
✓ unordered_set construction using iterators:
      unordered_set<int> s(nums.begin(), nums.end());

✓ Difference between vector search and hash-based lookup.

✓ Time Complexity Analysis:
      count() approach      -> O(n²)
      unordered_set approach -> O(n)

✓ Using hash tables to optimize searching problems.

Interview Takeaway:
Whenever frequent existence checks are required,
consider using unordered_set or unordered_map
instead of repeatedly traversing the array.
*/
using namespace std;

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> result;
        unordered_set<int> numSet(nums.begin(), nums.end());
        
        for(int i = 1; i <= nums.size(); i++) {
            if(numSet.count(i) == 0) {
                result.push_back(i);
            }
        }
        return result;
    }
};

int main() {
    Solution s1;
    
    vector<int> nums={1,2,3,4,6,9,9,8,9};
    vector<int> result=s1.findDisappearedNumbers(nums);
    for(int x:result){
        cout << x << " ";
    }
    return 0;
}