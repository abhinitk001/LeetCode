#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string processStr(string s) {
        int i;
       string results;
        for(i=0;i<s.length();i++){
            if(s[i]>='a'&& s[i]<='z'){
                results.push_back(s[i]);
            }
            else if(s[i]=='#'){
            results=results + results;
            }
            else if (s[i] == '*') {
               if (!results.empty()) {
               results.pop_back();
    }
}    
            
            else if(s[i]=='%'){
                reverse(results.begin(),results.end());
            }
        }
            return results;
        }
        
}
;
int main(){
    Solution Sol;
    string s;
    getline(cin, s);
    cout << Sol.processStr(s) << '\n';

    return 0;
}
/*
Learnings:

1. String Manipulation
   - push_back() adds a character to the end of a string.
   - pop_back() removes the last character from a string.
   - Always check !empty() before using pop_back() to avoid errors.

2. String Duplication
   - results = results + results;
     doubles the current string.
   - Useful for creating repeated patterns quickly.

3. Reversing a String
   - reverse(results.begin(), results.end());
     reverses the string in-place.
   - reverse() is available through <algorithm>.

4. Conditional Processing
   - Different special characters can be used as commands:
       '#' → duplicate string
       '*' → delete last character
       '%' → reverse string
   - This is an example of simulation using conditionals.

5. Good Practice
   - Handling edge cases such as an empty string before pop_back().
   - Using getline() allows reading spaces in the input.

6. Problem-Solving Insight
   - Instead of modifying the original string, maintaining a separate
     result string makes the logic easier to implement and debug.

Mistakes I Avoided:
   - Calling pop_back() on an empty string.
   - Reversing the input string instead of the result string.
   - Forgetting to return the final processed string.
*/