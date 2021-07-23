#include <bits/stdc++.h>
using namespace std;
// https://leetcode.com/problems/minimum-value-to-get-positive-step-by-step-sum/
// 1413. Minimum Value to Get Positive Step by Step Sum
class Solution {
public:
    int minStartValue(vector<int>& nums) {
        vector<int> acc;
        int res = 0;
        acc.push_back(0);
        for(auto a: nums){
            acc.push_back(acc.back() + a);
        }
        sort(acc.begin(), acc.end());
        while(acc.front() < 1){
            acc.front()++;
            res++;
        }
        return res;
    }
};
int main(){
    Solution s;
    int res;
    vector<int> v;
    v.push_back(0);
    v.push_back(1);
    v.push_back(2);
    //v.push_back(4);
    //v.push_back(2);
    res = s.minStartValue(v);
    cout << res << endl;
    return 0;
}