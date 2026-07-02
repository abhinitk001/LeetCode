#include <bits/stdc++.h>
using namespace std;
/*
Problem: Remove Duplicates from Sorted Array

Approach:
1. Sort the array so that all duplicate elements come together.
2. Use the unique() function to  move duplicate elements to the end.
3. Erase the duplicate part using erase().
4. Return the size of the modified vector.

Key STL Functions Learned:
- sort()   -> Arranges elements in ascending order.
- unique() -> Removes consecutive duplicate elements.
- erase()  -> Deletes unwanted elements from a vector.

Time Complexity:
- sort()   : O(n log n)
- unique() : O(n)
- erase()  : O(n)

Overall Time Complexity: O(n log n)
Space Complexity: O(1) (excluding internal STL operations)

DSA Concepts Learned:
1. Array Manipulation
2. Sorting Techniques
3. STL Algorithms (sort, unique, erase)
4. Removing Duplicates Efficiently
5. Understanding Time Complexity Analysis

Note:
The original LeetCode problem assumes the array is already sorted.
A more optimal solution uses the Two-Pointer Technique and achieves:
Time Complexity: O(n)
Space Complexity: O(1)

Takeaway:
This problem teaches how sorting can simplify duplicate removal and introduces useful STL functions. It also highlights that choosing the right technique (Two Pointers) can improve performance from O(n log n) to O(n).
*/
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        nums.erase(unique(nums.begin(),nums.end()),nums.end());
        int result= nums.size();
        return result;
    }
};
int main(){
    Solution sol;
    vector <int> nums={1,1,2};
    int result=sol.removeDuplicates(nums);
    cout<< result;
    return 0;
}