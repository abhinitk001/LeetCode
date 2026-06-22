#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int x=0;
        for(int i=0;i<operations.size();i++){
            if(operations[i]=="++X" || operations[i]=="X++")
            x++;
            else if(operations[i]=="X--" || operations[i]=="--X")
            x--;
    }
        return x;
    }
};

int main() {
    Solution s1;
    vector<string> operations={"--X","--X"};
    int result=s1.finalValueAfterOperations(operations);
    // for(int x:result)
    cout << result << " ";
    return 0;
}
/*
DSA Learning Notes:

Problem: Final Value of Variable After Performing Operations

Key Idea:
- Start with x = 0.
- Increment for:
      "++X" or "X++"
- Decrement for:
      "--X" or "X--"

What I Learned:

1. String Comparison
   - Strings can be compared directly using ==.
   - Example:
         if(operation == "++X")

2. Conditional Logic
   - Multiple conditions can be combined using ||.
   - Example:
         operation == "++X" || operation == "X++"

3. Array Traversal
   - Process each operation one by one.
   - Update the answer based on the operation type.

4. Pattern Recognition
   - The exact position of '+' or '-' does not matter.
   - Only whether the operation represents increment
     or decrement.

5. Alternative Optimization
   - Since '+' appears only in increment operations:
         if(operation[1] == '+')
             x++;
         else
             x--;

   - This reduces the number of string comparisons.

Complexity Analysis:
- Time Complexity = O(n)
- Space Complexity = O(1)

STL / C++ Concepts Practiced:
✓ vector<string>
✓ String comparison using ==
✓ Logical OR (||)
✓ Loop traversal

Interview Takeaway:
Many array problems are simple simulation problems.
Focus on:
    ✓ Understanding the operation
    ✓ Updating state correctly
    ✓ Looking for patterns that simplify conditions
*/