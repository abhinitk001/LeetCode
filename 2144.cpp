//minimum-cost-of-buying-candies-with-discount
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
    for(int i=0; i<=cost.size()-1;i=i+3){
        sum=sum+cost[i];
    }
    for(int i=1;i<=cost.size()-1;i=i+3){
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
// Mistake 1:
// Used while(r >= cost.size() - 1)
// This condition becomes true even when r goes beyond the vector size,
// leading to out-of-bounds access and possible infinite loop.
// Always check bounds using r < cost.size().

// Mistake 2:
// Assumed cost[0] and cost[1] exist when size < 3.
// For size 0 or 1, this causes invalid access.
// Always handle edge cases before indexing.

// Mistake 3:
// Wrote separate conditions for size 0, 1, and 2.
// These can be simplified using accumulate() or by writing
// logic that naturally handles small inputs.

// Mistake 4:
// Calculated the answer once using the "(i + 1) % 3 != 0" approach,
// then added elements again in two additional loops.
// This resulted in redundant computation.

// Mistake 5:
// Divided the final answer by 2 to compensate for double counting.
// If division is needed to fix counting, the logic should be reconsidered.
// Aim to compute the answer correctly in a single pass.

// Learning 1:
// After sorting in descending order, every third candy is free.
// The simplest solution is to skip indices 2, 5, 8, ...

// Learning 2:
// Prefer a single traversal whenever possible.
// Multiple traversals increase code complexity and bug chances.

// Learning 3:
// Use '<' instead of '<=' with vector indices when iterating.
// Example: i < cost.size() is safer than i <= cost.size() - 1.

// Learning 4:
// Before accessing cost[i + 1], always verify
// that i + 1 < cost.size().

// Learning 5:
// If the solution feels like it needs a correction factor
// (such as dividing by 2 at the end), recheck the counting logic.

// Learning 6:
// Write the simplest correct solution first.
// Simple code is easier to debug, verify, and optimize.