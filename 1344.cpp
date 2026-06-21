/**
 * ============================================================================
 * Problem: 1344 Clock Angle Calculation
 * ============================================================================
 * * Description:
 * Calculates the smallest angle between the hour and minute hands of an 
 * analog clock given a specific time. While conceptually simple, it requires 
 * careful handling of geometric edge cases.
 * * Key Learnings & Pitfalls to Avoid:
 * - Data Types: Must use float/double instead of int to prevent precision 
 * loss during division (e.g., the hour hand moves exactly 0.5 degrees 
 * every minute).
 * - The 12 o'clock rule: Hour 12 must be modulo'd or treated as 0 to 
 * keep the math consistent.
 * - Negative Angles: The difference between the hands can be negative 
 * depending on which hand is ahead; use absolute value (abs) to fix this.
 * - The 180° Rule: A clock is a circle (360°). We always want the smaller 
 * inner angle. If the calculated angle is > 180°, the true angle is 
 * (360° - calculated_angle).
 * ============================================================================
 */
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    double angleClock(int hour, int minutes) {
        if(hour==12){
        hour=0;}
        float degree_hour= hour*30 + 0.5*minutes;
        float degree_min= 6*minutes;
        float a= degree_min - degree_hour;
        a=abs(a);
        if(a>180){
            a=360-a;
        }
        return (a);
    }
};
int main(){
    Solution sol;
    int hour, minute;
    cout<<"Enter Hour"<<endl;
    cin>>hour;
    cout<<"Enter Minute"<<endl;
    cin>>minute;
    float result=sol.angleClock(hour,minute);
    cout<<result;
    return 0;

}