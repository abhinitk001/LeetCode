#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minimumCost(vector<int>& cost) {
    sort(cost.begin(), cost.end(), greater<int>());

    int sum = 0;
    for (int i = 0; i < cost.size(); i++) {
    if ((i + 1) % 3 != 0)
        sum += cost[i];
}
    for(int i=0; i<cost.size()-1;i=i+3){
        sum=sum+cost[i];
    }
    for(int i=1;i<cost.size()-1;i=i+3){
        sum=sum+cost[i];
    }
    return sum/2;
    }
};
int main(){
    Solution sol;
    vector<int> cost={6,5,7,9,2};
    int a=sol.minimumCost(cost);
    cout<<a;
    return 0;
}