#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n=arr.size();
        if(n==1)
        arr[0]=-1;
        for(int i=0;i<n-1;i++){
            int k=arr[i+1];
            for(int j=i+1;j<n;j++){
                if(arr[j]>k){
                    k=arr[j];
                }
            }
            arr[i]=k;
            }
            arr[n-1]=-1;
            return arr;
        }
  
};
// The below solution is the best time optimized solution 

// class Solution {
// public:
//     vector<int> replaceElements(vector<int>& arr) {
//         int n=arr.size();
//         int maxi=-1;
//         for(int i=n-1;i>=0;i--)
//         {
//             int curr=arr[i];
//             arr[i]=maxi;
//             maxi=max(curr,maxi);
//         }
//         return arr;
//     }
// };

int main() {
    Solution s1;
    vector<int> arr={56903,18666,60499,57517,26961};
    vector<int> result=s1.replaceElements(arr);
    for(int x:result)
    cout << x << " ";
    return 0;
}
/*
DSA Learning Notes:

Problem: Replace every element with the greatest element on its right side.

My Initial Approach:
- For every index i, I searched the entire right portion
  of the array to find the maximum element.
- Then replaced arr[i] with that maximum value.

Issues with Initial Approach:
1. Nested Loops
   - For each element, I traversed the remaining array.
   - Time Complexity = O(n²).

2. Repeated Work
   - The maximum values on the right were calculated
     again and again for different indices.
   - This caused unnecessary computations.

3. Edge Case Handling
   - Needed special handling for:
         n == 1
     because the only element should become -1.

DSA Concepts Learned:

1. Reverse Traversal
   - Sometimes processing from right to left is more efficient
     than left to right.

2. Suffix Maximum Technique
   - Maintain the maximum element seen so far while moving
     from the end of the array.
   - This avoids repeatedly searching for maximum values.

3. In-Place Updates
   - The array can be modified directly without using
     extra space.

Optimized Approach:
    int maxi = -1;
    for(int i=n-1; i>=0; i--) {
        int curr = arr[i];
        arr[i] = maxi;
        maxi = max(maxi, curr);
    }

Why It Works:
- maxi always stores the greatest element to the right
  of the current index.
- Each element is processed exactly once.

Complexity Comparison:
- Brute Force      : O(n²)
- Optimized Method : O(n)

Space Complexity:
- O(1)

Interview Takeaway:
Whenever a problem asks for information about elements
to the right of each index, consider:
    ✓ Reverse Traversal
    ✓ Suffix Maximum
    ✓ Running Maximum
These patterns often reduce O(n²) solutions to O(n).
*/