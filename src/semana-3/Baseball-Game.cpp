#include <bits/stdc++.h>
using namespace std;
// https://leetcode.com/problems/baseball-game/
// 682. Baseball Game
class Solution {
public:
    int calPoints(vector<string>& ops) {
        int acc, last, i, dec;
        i = 0;
        dec = 1;
        vector<int> vacc;

        for(string s : ops){
            if(s == "D"){
                last = vacc.size() - 1;
                vacc.push_back(vacc.at(last) * 2);
            }else if(s == "C"){
                vacc.pop_back();
            }else if(s == "+"){
                last = vacc.size() - 1;
                vacc.push_back(vacc.at(last) + vacc.at(last-1) );
            }else{
                for(int j = s.size()-1; j >= 0; j--){
                    if(s[j] == '-'){
                        i *= (-1);
                    }else{
                        i = i + ((s[j]-'0') * dec);
                        dec *= 10;
                    }
                }
                vacc.push_back(i);
                i = 0;
                dec = 1;
            }
        }
        
        acc = accumulate(vacc.begin(), vacc.end(), 0);
        return acc;
    }
};
int main(){
    Solution s;
    vector<string> ops;
    ops.push_back("5");
    ops.push_back("-2");
    ops.push_back("4");
    ops.push_back("C");
    ops.push_back("D");
    ops.push_back("9");
    ops.push_back("+");
    ops.push_back("+");
    cout << s.calPoints(ops) << endl;
    return 0;
}