#include <bits/stdc++.h>
using namespace std;
// https://leetcode.com/problems/missing-number/
// 268. Missing Number
// Problemas comentado
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
        int acc, nsum, n;
        acc = nsum = 0;
        n = 1;
        
        for(auto a : nums){
            acc += a;
            nsum += n;
            n++;
        }
        
        return nsum - acc;
    }
};
int main(){
    
    return 0;
}