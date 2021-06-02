#include <bits/stdc++.h>
using namespace std;
// https://leetcode.com/problems/minimum-add-to-make-parentheses-valid/
// 921. Minimum Add to Make Parentheses Valid
class Solution {
public:
    int minAddToMakeValid(string s) {
        int aux, p, i;
        char c;
        c = '(';
        i = aux = 0;

        while( i < s.length() ){
            if(s[i] == c and aux == 0){
                c = ')';
                aux = 1;
                p = i;
            }else if(aux == 1 and s[i] == c){
                c = '(';
                s.erase(p, 1);
                s.erase(i-1, 1);
                aux = i = 0;
                continue;
            }
            i++; 
        }
        return s.length();
    }
};
int main(){
    Solution s;
    string st;
    st = "())";
    //st = "(((";
    //st = "()";
    //st = "()))((";
    //st = "(()))((";
    cout << s.minAddToMakeValid(st) << endl;
    return 0;
}