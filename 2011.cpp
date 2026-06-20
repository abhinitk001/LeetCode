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