#include <bits/stdc++.h>
using namespace std;
// https://leetcode.com/problems/maximum-xor-for-each-query/
// 1829. Maximum XOR for Each Query
class Solution {
public:
    vector<int> getMaximumXor(vector<int>& nums, int maximumBit) {
        vector <int> xacc, res;
        int b, k;
        xacc.push_back(0);
        
        for(auto n : nums){
            xacc.push_back(xacc.back() ^ n);
        }
        
        while(!xacc.empty()){
            b = xacc.back();
            k = ~b&((1<<maximumBit)-1);
            res.push_back(k);
            xacc.pop_back();
        }
        res.pop_back();
        return res;
    }
};
int  main(){
    
    return 0;
}