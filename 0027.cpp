
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