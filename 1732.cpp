#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        for(int i=1;i<gain.size();i++){
            gain[i]=gain[i]+gain[i-1];
        }
        int maxVal = *max_element(gain.begin(), gain.end());
        if (maxVal<0)
        maxVal=0;
    return maxVal;
    }
};

int main() {
    Solution s1;
    vector<int> gain={-5,-2,-6,9};
    int result=s1.largestAltitude(gain);
    // for(int x:result)
    cout << result << " ";
    return 0;
}