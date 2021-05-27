#include <bits/stdc++.h>
using namespace std;
// https://leetcode.com/problems/search-insert-position/
// 35. Search Insert Position
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        vector<int>::iterator it;
        it = lower_bound(nums.begin(), nums.end(), target);
        return it - nums.begin();
    }
};
int main(){
    vector<int> nums;
    nums.push_back(1);
    nums.push_back(3);
    nums.push_back(5);
    nums.push_back(6);
    int target = 7;
    Solution s;
    cout << s.searchInsert(nums, target) << endl;

    return 0;
}