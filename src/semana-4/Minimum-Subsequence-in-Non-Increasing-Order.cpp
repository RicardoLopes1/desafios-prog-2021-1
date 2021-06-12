#include <bits/stdc++.h>
using namespace std;
// https://leetcode.com/problems/minimum-subsequence-in-non-increasing-order/
// 1403. Minimum Subsequence in Non-Increasing Order
class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums) {
        int acc, vacc;
        vector<int> result;
        vacc = 0;
        sort(nums.begin(), nums.end());
        acc = accumulate(nums.begin(), nums.end(), 0);

        while(acc >= vacc){
            result.push_back(nums.back());
            vacc += nums.back();
            acc -= nums.back();
            nums.pop_back();
        }
        return result;
    }
};
int main(){
    Solution s;
    vector<int> nums, result;
    nums.push_back(4);
    nums.push_back(4);
    nums.push_back(7);
    nums.push_back(6);
    nums.push_back(7);

    result = s.minSubsequence(nums);
    for(int i : result){
        cout << i << " ";
    }
    cout << endl;
    return 0;
}