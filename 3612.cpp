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