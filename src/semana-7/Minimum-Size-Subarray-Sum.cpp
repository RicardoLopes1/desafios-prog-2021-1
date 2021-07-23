#include <bits/stdc++.h>
using namespace std;
// https://leetcode.com/problems/minimum-size-subarray-sum/
// 209. Minimum Size Subarray Sum
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int res, j, n;
        vector<int> acc;
        acc.push_back(0);
        bool flag = true;
        j = 0;
        res = n = nums.size();
        
        for(auto a : nums){
            acc.push_back(acc.back() + a);
        }
        
        for(int i=0; i<n; i++){
            for(int j=i+1; j<=n; j++){
                if( (acc[j] - acc[i]) >= target){
                    res = min(res, j-i);
                    flag = false;
                    break;
                }
            }
        }
        if(flag) res = 0;
        return res;
    }
};
int main(){
    
    return 0;
}