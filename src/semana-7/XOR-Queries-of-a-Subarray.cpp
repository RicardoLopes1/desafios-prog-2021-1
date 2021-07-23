#include <bits/stdc++.h>
using namespace std;
// https://leetcode.com/problems/xor-queries-of-a-subarray/
// 1310. XOR Queries of a Subarray
class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        vector<int> res, xacc;
        int n;
        xacc.push_back(0);
        n = arr.size();
        
        for(auto a: arr){
            xacc.push_back(xacc.back() ^ a);
        }
        
        for(auto q: queries){
            res.push_back(xacc[q[1]+1] ^ xacc[q[0]]);
        }
        return res;
    }
};
int main(){
    
    return 0;
}