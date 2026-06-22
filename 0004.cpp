#include <bits/stdc++.h>
using namespace std;

// Mistake #1:
// Used the wrong index for the median in an odd-sized array.
// I accessed the element after the middle instead of the middle element itself.

// Mistake #2:
// Used the wrong pair of middle elements for an even-sized array.
// The median should be calculated from the two actual middle elements.

// Mistake #3:
// Performed integer division while calculating the median for an even-sized array.
// This caused decimal values to be truncated.

// Mistake #4:
// Tried to use length() on a vector.
// Vectors use size(), not length().

// Mistake #5:
// Used '=' instead of '==' while checking whether the array size was odd.
// '=' assigns a value, while '==' compares values.

// Mistake #6:
// Attempted to use an invalid comparator while sorting.
// Ascending order sorting does not require a custom comparator.

// Mistake #7:
// Returned the median value directly from main().
// main() should return an integer exit status, and the result should be printed separately.

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        nums1.insert(nums1.end(), nums2.begin(), nums2.end());

        sort(nums1.begin(),nums1.end());
        double median;
        if(nums1.size()%2==1){
            int n=nums1.size()/2;
            median = nums1[n];
        }
        else{
            int n=nums1.size()/2;
            median= (nums1[n-1]+nums1[n])/2.0;
        }
        return median;
    }
};
int main(){
    Solution sol;
    vector<int> nums1={1,3};
    vector<int> nums2= {2};
    double result=sol.findMedianSortedArrays(nums1, nums2);
    cout<<result;
    return 0;
}
// What I learned:
//
// 1. vector<int> uses size(), not length().
//
// 2. To check odd size:
//    nums.size() % 2 == 1
//
// 3. For odd-sized arrays:
//    median = nums[n/2]
//
// 4. For even-sized arrays:
//    median = (nums[n/2 - 1] + nums[n/2]) / 2.0
//
// 5. My solution works but is not optimal.
//
// 6. Complexity:
//    Merge + Sort = O((m+n) log(m+n))
//
// 7. Better approach:
//    Since arrays are already sorted,
//    merge them directly in O(m+n).
//
// 8. Optimal LeetCode solution:
//    Binary Search Partition
//    Complexity = O(log(m+n))