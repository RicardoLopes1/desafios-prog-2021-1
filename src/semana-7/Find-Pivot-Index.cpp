#include <bits/stdc++.h>
using namespace std;
// https://leetcode.com/problems/find-pivot-index/
// 724. Find Pivot Index
class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        vector<int> acc;
        int n, res;
        acc.push_back(0);
        
        for(auto i : nums){
            acc.push_back(acc.back() + i);
        }
        n = acc.size() - 1;
        res = -1;
        // suml = acc[index - 1]
        // sumr = acc[n] - acc[index]
        for(int index=1; index<=n; index++){
            if(acc[index-1] == (acc[n] - acc[index])){
                res = index-1;
                break;
            }
        }
        return res;
    }
};
int main(){
    
    return 0;
}