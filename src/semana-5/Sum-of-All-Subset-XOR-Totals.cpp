#include <bits/stdc++.h>
using namespace std;
// https://leetcode.com/problems/sum-of-all-subset-xor-totals/
// 1863. Sum of All Subset XOR Totals
class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        int acc, n, x;
        acc = 0;
        n = nums.size();
        // nums[i] max = 20.
    
        for(int mask = 1; mask < 1<<n; mask++){
            x = 0;
            for(int i = 0; i < n; i++){
                if(mask & (1<<i)){
                    x = x^nums[i];
                }
            }
            acc += x;
        }
        return acc;
    }
};

int main(){
    Solution s;
    vector<int> nums;
    int res;
    nums.push_back(5);
    nums.push_back(1);
    nums.push_back(6);

    res = s.subsetXORSum(nums);
    cout << res << endl;
    return 0;
}