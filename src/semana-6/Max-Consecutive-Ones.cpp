#include <bits/stdc++.h>
using namespace std;
// https://leetcode.com/problems/max-consecutive-ones/
// 485. Max Consecutive Ones
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n, res;
        n = res = 0;
        for(int i: nums){
            if(i == 1){
                n++;
            }else{
                res = max(res, n);
                n = 0;
            }
        }
        res = max(res, n);
        return res;
    }
};
int main(){
    
    return 0;
}