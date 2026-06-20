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