#include <bits/stdc++.h>
using namespace std;
// https://leetcode.com/problems/longest-happy-string/
// 1405. Longest Happy String
// NOT SUCCESS!
class Solution {
public:
    string longestDiverseString(int a, int b, int c) {
        string s = "";
        if(a == 0 and b == 0 and c == 0) return s;
        int i;
        i = 0;
        
        vector< pair<int, char> > abc;
        abc.push_back(make_pair(a,'a'));
        abc.push_back(make_pair(b,'b'));
        abc.push_back(make_pair(c,'c'));
        sort(abc.rbegin(), abc.rend());
        
        s += abc.at(0).second;
        abc.at(0).first--;
        while (abc.at(0).first > 0 or abc.at(1).first > 0 or abc.at(2).first > 0){
            if( s[i] == s[i-1] ){
                if(s[i] != abc.at(0).second and abc.at(0).first > 0){
                    s += abc.at(0).second;
                    abc.at(0).first--;
                    i++;
                }else if(s[i] != abc.at(1).second and abc.at(1).first > 0){
                    s += abc.at(1).second;
                    abc.at(1).first--;
                    i++;
                }else if(s[i] != abc.at(2).second and abc.at(2).first > 0){
                    s += abc.at(2).second;
                    abc.at(2).first--;
                    i++;
                }else if(s[i] == abc.at(0).second and abc.at(0).first > 0){
                    abc.at(0).first--;
                }else if(s[i] == abc.at(1).second and abc.at(1).first > 0){
                    abc.at(1).first--;
                }else if(s[i] == abc.at(2).second and abc.at(2).first > 0){
                    abc.at(2).first--;
                }
            }else if(abc.at(0).first > 0){
                s += abc.at(0).second;
                abc.at(0).first--;
                i++;
            }else if(abc.at(1).first > 0){
                s += abc.at(1).second;
                abc.at(1).first--;
                i++;
            }else if(abc.at(2).first > 0){
                s += abc.at(2).second;
                abc.at(2).first--;
                i++;
            }
            
        }// while
        
        return s;
    }
};
int main(){
    Solution s;
    int a, b, c;
    a = 1;
    b = 1;
    c = 7;
    string palavra = s.longestDiverseString(a, b, c);
    cout << palavra << endl;
    return 0;
}
/*
if( (s[i] == s[i-1] ) or abc.at(0).first == 0){
                if(abc.at(1).first > 0 and abc.at(1).first > abc.at(2).first){
                    s += abc.at(1).second;
                    abc.at(1).first--;
                    i++;
                }else if(abc.at(2).first > 0){
                    s += abc.at(2).second;
                    abc.at(2).first--;
                    i++;
                }else{
                    abc.at(0).first--;
                }
            }else if(abc.at(0).first > 0){
                if( s[i] != s[i-1] ){
                    s += abc.at(0).second;
                    i++;
                }
                abc.at(0).first--;
            }
            //i = s.length() - 1;
            //cout << "a: " << abc.at(2).first << " b: " << abc.at(1).first << " c: " << abc.at(0).first << endl;
            //cout << "I: " << i << " S-lenght: " << s.length() << endl;
*/