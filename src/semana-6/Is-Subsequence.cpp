#include <bits/stdc++.h>
using namespace std;
// https://leetcode.com/problems/is-subsequence/
// 392. Is Subsequence
class Solution {
public:
    bool isSubsequence(string s, string t) {
        bool flag = false;
        if(s.length() == 0) return true;
        int n, j;
        n = t.length();
        j = 0;

        for(int i=0; i<n; ){
            if(t[i] == s[j]){
                j++; i++;
            }else{
                i++;
            }
        }
        if(j == s.length()) flag = true;
        return flag;
    }
};
int main(){
    Solution sol;
    string s, t;
    s = "";
    t = "alsjcafd";
    cout << sol.isSubsequence(s, t) << endl;
    return 0;
}