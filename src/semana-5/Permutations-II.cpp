#include <bits/stdc++.h>
using namespace std;
// https://leetcode.com/problems/permutations-ii/
// 47. Permutations II
typedef vector<int> vi;
typedef vector<vi> vvi;

class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
      vvi res;
      sort(nums.begin(), nums.end());
      do{
          res.push_back(nums);
      }while(next_permutation(nums.begin(), nums.end()));

      return res;  
        
    }
};
int main(){
    Solution s;
    vi nums;
    vvi res;
    nums.push_back(1);
    nums.push_back(1);
    nums.push_back(2);
    res = s.permuteUnique(nums);
    for(auto i: res){
        for(auto j: i){
            cout << j << " ";
        }
        cout << endl;
    }
    
    return 0;
}