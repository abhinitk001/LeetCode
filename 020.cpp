#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(char c:s){
            if(c=='('||c=='['||c=='{'){
                st.push(c);
            }
            else{
                if(st.empty())
                return false;
                if((c==')'&& st.top()!='(')||
                (c==']'&& st.top()!='[')||
                (c=='}'&& st.top()!='{'))
                return false;
                st.pop();
            }

        }
        return st.empty();
        }
};
int main(){
    Solution sol;
    string str;
    cin>>str;
    cout<<sol.isValid(str);
    return 0;
}
// ================= STACK OPERATIONS IN C++ =================

// stack<int> st;
// Creates an empty stack of integers

// st.push(x);
// Inserts element x at the top of the stack

// st.pop();
// Removes the top element from the stack
// Does not return the removed element

// st.top();
// Returns the top element of the stack
// Does not remove it

// st.empty();
// Returns true if stack is empty
// Returns false otherwise

// st.size();
// Returns the number of elements in the stack

// st.emplace(x);
// Constructs and inserts element x at the top
// More efficient than push() for complex objects

// st.swap(otherStack);
// Swaps contents of two stacks

// ===========================================================
// COMPARISON OPERATORS (C++20 and later)
// ===========================================================

// st1 == st2
// Checks if both stacks contain the same elements

// st1 != st2
// Checks if stacks are different

// st1 < st2
// Lexicographical comparison

// st1 <= st2
// Lexicographical comparison

// st1 > st2
// Lexicographical comparison

// st1 >= st2
// Lexicographical comparison

// ===========================================================
// COMMON USAGE PATTERNS
// ===========================================================

// Insert an element
// st.push(10);

// Access the latest inserted element
// cout << st.top();

// Remove the latest inserted element
// st.pop();

// Check if stack is empty before using top() or pop()
// if(st.empty())

// Count elements in stack
// cout << st.size();

// ===========================================================
// IMPORTANT LEARNING
// ===========================================================

// Stack follows LIFO
// Last In First Out

// Example:
//
// st.push(10);
// st.push(20);
// st.push(30);
//
// Stack:
// 30 <- Top
// 20
// 10
//
// st.top() => 30
//
// st.pop();
//
// Stack:
// 20 <- Top
// 10

// ===========================================================
// THINGS YOU CANNOT DO DIRECTLY
// ===========================================================

// Cannot access by index
// st[0]    ❌

// Cannot iterate using iterators
// st.begin() ❌
// st.end()   ❌

// Cannot access middle elements directly

// Only the TOP element is accessible