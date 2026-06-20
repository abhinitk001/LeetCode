#include <iostream>
#include <vector>
#include <string>
using namespace std;


class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int len=arr.length();
        if(len%2==0){
            for(int i=0;i<len;i++){
                
            }
        }
    }
};
int main() {
    Solution s1;
    vector<int> arr={12,23,43,211};
    int result=s1.sumOddLengthSubarrays(arr);
    // for(int x:result)
    cout << result << " ";
    return 0;
}

