#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int max=0;
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums.size();j++){
                if(nums[i]*nums[j]>max)
                max=nums[i]*nums[j];
            }
        }
        return max;
    }
};


int main() {
    Solution s1;
    vector<int> nums={55,754,34,343};
    int result=s1.maxProduct(nums);
    // for(int x:result)
    cout << result << " ";
    return 0;
}

