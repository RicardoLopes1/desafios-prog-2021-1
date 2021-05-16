#include <bits/stdc++.h>
using namespace std;
/*SUBMETER ESSA CLASSE*/
class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> solve;
        for(int i = 0; i < n; i++){
            solve.push_back(nums[i]);
            solve.push_back(nums[i+n]);
        }
        return solve;
    }
};
/* ********* */
int main(){
    /*testando*/
    Solution s;
    vector<int> test, nums;
    nums.push_back(2);
    nums.push_back(5);
    nums.push_back(1);
    nums.push_back(3);
    nums.push_back(4);
    nums.push_back(7);

    test = s.shuffle(nums, 3);

    for (int r : test){
        cout << r << " ";
    }
    cout << endl;
    return 0;
}