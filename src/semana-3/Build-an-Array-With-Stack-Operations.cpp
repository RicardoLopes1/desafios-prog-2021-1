#include <bits/stdc++.h>
using namespace std;
// https://leetcode.com/problems/build-an-array-with-stack-operations/
// 1441. Build an Array With Stack Operations
class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> build;
        int j = 1;
        for(int i : target) {
            while(j <= i){
                if( i == j){
                    build.push_back("Push");
                }else{
                    build.push_back("Push");
                    build.push_back("Pop");
                }
                j++;
            }
        }//for
        return build;
    }
};
int main(){
    Solution s;
    vector<int> target;
    vector<string> solve;
    target.push_back(1);
    //target.push_back(2);
    target.push_back(3);
    //target.push_back(4);
    solve = s.buildArray(target, 4);
    for(string a : solve){
        cout << a << " ";
    }
    cout << endl;
    return 0;
}