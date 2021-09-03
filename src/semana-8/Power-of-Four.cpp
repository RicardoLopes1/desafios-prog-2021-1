#include <bits/stdc++.h>
using namespace std;
// https://leetcode.com/problems/power-of-four/
// 342. Power of Four
class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n < 0) return false;
        
        for(int i = 0; i < 17; i++){
            if(pow(4, i) == n){
                return true;
            }else if(pow(4,i) > n){
                return false;
            }
        }
        
        return false;
    } 
};
int main(){
    
    return 0;
}