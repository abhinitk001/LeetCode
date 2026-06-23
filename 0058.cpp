#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int lengthOfLastWord(string s) {
        int count=0;
        int a=s.length()-1;
        while (a >= 0 && s[a] == ' ') {
            a--;
        }
        for(int i=a;i>=0;i--){
            if(s[i]==' ')
            break;
            
            count++;
            
        }
        return count;
    }
};
int main(){
    Solution sol;
    string s;
    cin>>s;
    cout<<sol.lengthOfLastWord(s);
    return 0;
}
// LEARNINGS

// 1. String indexing starts from 0.
//    Last valid index = s.length() - 1.

// 2. return exits the function.
//    break exits only the loop.

// 3. Any code after return is never executed.

// 4. Skipping trailing spaces:
//    while(i >= 0 && s[i] == ' ') i--;
//    This moves the index, it does NOT modify the string.

// 5. When traversing backwards, start from the correct index.
//    If 'a' already points to the last character,
//    don't start from a - 1.

// 6. Use i >= 0 instead of i > 0
//    to ensure index 0 is also checked.

// 7. Common approach for "Last Word" problems:
//    - Skip trailing spaces
//    - Count characters until a space is found

// MISTAKES MADE

// ❌ Used s[s.length()] (out of bounds)
// ❌ Put count++ after return
// ❌ Didn't handle trailing spaces initially
// ❌ Started loop from a - 1 and skipped a character
// ❌ Used i > 0 instead of i >= 0
// ❌ Thought moving the index removes spaces from the string