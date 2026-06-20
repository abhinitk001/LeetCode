#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <unordered_set>

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
//in the solution below my mistake was to not use the unordered se
//set function properly so see the nums.begin section carefully 
// class Solution {
// public:
//     vector<int> findDisappearedNumbers(vector<int>& nums) {
//         vector<int> arr;
//         unordered_set<int>numset(nums.begin(),nums.end());

//         for(int i=1;i<nums.size();i++){
//             if(count(nums.begin(), nums.end(), i)==0)
//                 arr.push_back(i);
//         }
//         return arr;
//     }
// };

int main() {
    Solution s1;
    vector<int> nums={1,2,3,4,6,9,9,8,9};
    vector<int> result=s1.findDisappearedNumbers(nums);
    for(int x:result){
        cout << x << " ";
    }
    return 0;
}