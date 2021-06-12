#include <bits/stdc++.h>
using namespace std;
// https://leetcode.com/problems/assign-cookies/
// 455. Assign Cookies
class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int acc = 0;
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        
        while(!g.empty() and !s.empty()) {
            if(s.back() >= g.back()){
                acc++;
                s.pop_back();
                g.pop_back();
            }else{
                g.pop_back();
            }
        }
        return acc;
    }
};
int main(){
    Solution s;

    return 0;
}