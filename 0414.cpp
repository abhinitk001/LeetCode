#include <bits/stdc++.h>
using namespace std;
/**
 * ============================================================================
 * Problem: Third Maximum Number
 * ============================================================================
 * * Learnings & Pitfalls:
 * * 1. Sorting in Descending Order:
 * - Used `std::sort` with `std::greater<int>()` to sort the vector from 
 * largest to smallest.
 * * 2. Removing Duplicates (The Erase-Remove Idiom):
 * - C++ vectors don't have a simple "remove duplicates" method.
 * - `std::unique` shifts all unique elements to the front and returns an 
 * iterator to the new end of the unique range.
 * - `nums.erase(...)` then deletes the leftover duplicate garbage elements 
 * at the end of the vector.
 * * 3. Logic Optimization:
 * - MISTAKE: Initially used a for-loop to check the vector size.
 * - FIX: Realized no loop is needed after sorting and deduplicating. A simple 
 * if/else size check is sufficient to return either the 1st or 3rd max.
 * ============================================================================
 */
class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int result;

        sort(nums.begin(), nums.end(), greater<int>());
        nums.erase(unique(nums.begin(), nums.end()), nums.end());
        for(int i=0; i<nums.size(); i++){
            if(nums.size()<3){
                result=nums[0];
            }
            else{
                result= nums[2];
            }
        }
        return result;
        }
    };
    
int main(){
    Solution sol;
    vector<int> k = {3, 2, 1};
    cout << sol.thirdMax(k) << '\n';
    return 0;
}