#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        vector<int> gen(nums.size());
        for(int i=0;i<nums.size();i++){
            gen.insert(index[i],nums[i]);
        }
    return gen;
    }
};

int main() {
    Solution s1;
    vector<int> nums = {1, 2, 3, 4, 6, 9,9};
    vector<int> index={0,1,2,3,3,4,5};
    vector<int> result = s1.createTargetArray(nums,index);
    for(int x : result) {
        cout << x << " ";  // Print x, not result
    }
    cout << endl;
    return 0;
}
// Output: 5 7