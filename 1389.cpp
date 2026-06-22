#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        vector<int> gen;

        for(int i = 0; i < nums.size(); i++) {
            gen.insert(gen.begin() + index[i], nums[i]);
        }

        return gen;
    }
};

int main() {
    Solution s1;

    vector<int> nums = {1, 2, 3, 4, 6, 9, 9};
    vector<int> index = {0, 1, 2, 3, 3, 4, 5};

    vector<int> result = s1.createTargetArray(nums, index);

    for(int x : result) {
        cout << x << " ";
    }

    return 0;
}/*
Mistakes & Learnings:

1. I tried to use:
       gen.insert(index[i], nums[i]);
   but vector::insert() expects an iterator, not an integer index.

   Correct usage:
       gen.insert(gen.begin() + index[i], nums[i]);

2. I initialized the vector as:
       vector<int> gen(nums.size());
   which created a vector already filled with default values (0s).

   Since I wanted to build the target array dynamically using insert(),
   I should have started with:
       vector<int> gen;

3. Learned that:
   - push_back() adds elements at the end of a vector.
   - insert() can add elements at any position.
   - To access a position in insert(), an iterator is required:
         vector.begin() + index

4. Important takeaway:
   Always check a function's parameter types before using it.
   Reading the STL documentation carefully can save debugging time.
*/