#include <bits/stdc++.h>
using namespace std;
// https://leetcode.com/problems/move-zeroes/
// 283. Move Zeroes
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n;
        n = nums.size();
        
        for(int i=0; i < n; i++){
            if(nums[i] == 0){
                nums.push_back(0);
            }
        }
        for(int i=0; i < n; i++){
            if(nums[i] == 0){
                nums.erase(nums.begin()+i);
                i--; n--;
            }
        }

    }
};
int main(){
    Solution s;
    vector<int> v;
    v.push_back(0);
    v.push_back(0);
    //v.push_back(0);
    //v.push_back(3);
    //v.push_back(12);
    s.moveZeroes(v);
    for(auto i: v){
        cout << i << " ";
    }
    cout << endl;
    return 0;
}