#include <bits/stdc++.h>
using namespace std;
// https://leetcode.com/problems/hamming-distance/
// 461. Hamming Distance
// não feito.
class Solution {
public:
    int hammingDistance(int x, int y) {
        int res = x^y;
        res = __builtin_popcount(res);
        
        return res;
    }
};
int main(){
    Solution s;
    int x, y;
    x = 73;// 001 ->
    y = 93;// 100 ->
    cout << s.hammingDistance(x, y) << endl;
    return 0;
}