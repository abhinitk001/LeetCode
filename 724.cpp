#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int totalSum = 0;
        
        // Calculate total sum
        for(int num : nums) {
            totalSum += num;
        }
        
        int leftSum = 0;
        for(int i = 0; i < nums.size(); i++) {
            // rightSum = totalSum - leftSum - nums[i]
            int rightSum = totalSum - leftSum - nums[i];
            
            if(leftSum == rightSum) {
                return i;  // Found pivot index
            }
            
            leftSum += nums[i];  // Add current to left sum
        }
        
        return -1;  // No pivot found
    }
};

int main() {
    Solution s1;
    vector<int> nums={1,1,1,1,1};
    int result=s1.pivotIndex(nums);
    // for(int x:result)
    cout << result << " ";
    return 0;
}

