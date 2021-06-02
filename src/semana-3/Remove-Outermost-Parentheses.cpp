#include <bits/stdc++.h>
using namespace std;
// https://leetcode.com/problems/remove-outermost-parentheses/
// 1021. Remove Outermost Parentheses
class Solution {
public:
    string removeOuterParentheses(string s) {
        string solve = "";
        int aux = 0;
        
        for(int i = 0; i < s.length(); i++){
            if(aux == 0){
                aux++;
                continue;
            }
            if(s[i] == '('){
                aux++;
            }else if(s[i] == ')'){
                aux--;
            }
            
            if(aux > 0){
                solve += s[i];
            }

        }
        return solve;       
    }
};
int main(){
    string s1, s2, s3;
    Solution s;
    s1 = "(()())(())";
    s2 = "(()())(())(()(()))";
    s3 = "()()";
    cout << s.removeOuterParentheses(s2) << endl;
    return 0;
}