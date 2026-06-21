/**
 * ============================================================================
 * Problem: Count Negative Numbers in a Sorted Matrix
 * ============================================================================
 * * Learnings & Pitfalls:
 * * 1. 2D Vector Dimensions: 
 * - A 2D vector is an array of arrays.
 * - `grid.size()` gives the number of rows.
 * - `grid[0].size()` gives the number of columns in the first row.
 * * 2. Heap Buffer Overflow (Out of Bounds):
 * - MISTAKE: Initially tried to multiply (rows * columns) and use that 
 * as the maximum limit for the loops. 
 * - FIX: Realized that `i` (rows) and `j` (columns) navigate different 
 * dimensions independently. Forcing a 2D lookup `grid[i][j]` using a 
 * flattened 1D boundary causes out-of-bounds memory errors.
 * * 3. Size vs Length vs Sizeof:
 * - `size()`: Returns number of elements in a vector/string (e.g., grid.size()).
 * - `length()`: Same as size(), but specifically used for strings.
 * - `sizeof()`: Returns memory footprint in bytes (e.g., sizeof(int) == 4).
 * NEVER use sizeof() to find the length of a dynamic vector!
 * ============================================================================
 */
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int count=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]<0)
                count++;
            }
        }
        return count;
    }
};

int main(){
    Solution sol;
    vector<vector<int>> k = {{4,3,2,-1},{3,2,1,-1},{1,1,-1,-2},{-1,-1,-2,-3}};
    cout << sol.countNegatives(k) << "\n";
    return 0;
}