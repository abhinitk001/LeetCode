//Problem #27 – Remove Elements
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int> arr;
        for(int i=0;i<nums.size();i++){
            if(nums[i] !=val){
                arr.push_back(nums[i]);
            }
        }
        for (int i = 0; i < arr.size(); i++) {
            nums[i] = arr[i];
        }
    return arr.size();
    }
        };
int main(){
    Solution sol;
    vector<int> num1={13,34,14,13,41,34,314};
    int num2=34;
    int result;
    cout<<sol.removeElement(num1,num2);
    return 0;
}
// Mistake 1:
// Initially wrote the loop as:
// for (int i = 0; i < nums.size() - 1; i++)
// This skipped the last element of the array.
// Learning: Always use i < nums.size() unless there is a specific reason
// to exclude the last element.

// Mistake 2:
// Returned arr.size() outside the function scope.
// Learning: Ensure the return statement is inside the function body.

// Mistake 3:
// Created a new vector but forgot to copy its contents back to nums.
// Learning: LeetCode #27 checks the modified nums array, not just the
// returned size. Any changes made to a temporary vector must be reflected
// in nums if using this approach.

// Mistake 4:
// Assumed returning the correct count was enough.
// Learning: Read the problem statement carefully. Some problems require
// modifying the input array in-place in addition to returning a value.

// Mistake 5:
// Used an extra vector, which increases space complexity to O(n).
// Learning: While this approach works, the optimal solution uses two pointers
// and modifies nums directly, achieving O(1) extra space.