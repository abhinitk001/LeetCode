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