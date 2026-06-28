//Longest substring without repeating characters
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int size=s.size(),i=0,j=0,a=0,range=1,ans=0;
        bool m=false;
        if(size==(0||1)) return size;
        while(true)
        {
            i=a;
            // checking for sub string starting from index a
            while(i>=a && i<=a+range)
            {
                m=false;
                if(i>=size) return ans;
                // checking if char is same. if same changing starting index.
                for(j=a;j<i;j++) if(s[j]==s[i]) {m=true; a=j+1; range--; break;}
                i++;
            }
            // if not matched with any char, increase range.
            if(m==false) range++;
            ans=max(ans,range);
        }
        return ans;
    }
};
int main