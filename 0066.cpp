/*
Mistakes I made:
1. Tried to access the last element using digits[digits.size()], but valid indices go from 0 to digits.size() - 1.
2. Used string::push_back() with an integer directly, forgetting that it expects a character.
3. Tried to assign values to arr[i] when the vector was empty, causing out-of-bounds access.
4. Forgot to update sum in the loop by writing sum/10 instead of sum /= 10.
5. Returned nothing (return;) from a function that should return a vector<int>.
6. Focused on converting digits to a number/string instead of handling the carry operation directly.
7. Did not consider edge cases such as [9], [9,9], or [1,2,9].

What I learned:
1. Always check array/vector indices carefully to avoid out-of-bounds errors.
2. Understand the difference between characters and integers when working with strings.
3. Use push_back() to add elements to a vector instead of assigning to non-existent indices.
4. Pay attention to operators like /=, as missing assignment can break logic.
5. Think about edge cases before finalizing the solution.
6. In DSA problems, it is often better to manipulate the given data structure directly rather than converting it to another type.
7. For problems involving addition, handling carry digit-by-digit is more efficient and avoids overflow issues.
8. Always analyze time and space complexity and choose the simplest valid approach.
*/
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {

        for (int i = digits.size() - 1; i >= 0; i--) {

            if (digits[i] < 9) {
                digits[i]++;
                return digits;
            }

            digits[i] = 0;
        }

        digits.insert(digits.begin(), 1);
        return digits;
    }
};

int main() {
    Solution s1;
    vector<int> digit={9};
    vector<int> result=s1.plusOne(digit);
    for(int x:result){
    cout<< x << " ";}
    return 0;
}