#include <bits/stdc++.h>
using namespace std;
// https://leetcode.com/problems/make-the-string-great/
// 1544. Make The String Great
class Solution {
public:
    string makeGood(string s) {
        if(s == "" or s.length() == 1) return s;
        string solve;
        bool b = false;
        
        do{
           b = false;
           if(s[0] >= 'a'){
               // lower case init 'a' = 97
               for(int i = 0; i < s.length(); i++){
                   if(s[i] < 'a'){
                       if(s[i-1] == (s[i]+32)){
                           s.erase(i-1, 2);
                           b = true;
                           break;
                       }else if(s[i+1] == (s[i]+32)){
                           s.erase(i, 2);
                           b = true;
                           break;
                       }
                   }
               }
           }else{
               // upper case init 'A' = 65
               for(int j = 0; j < s.length(); j++){
                   if(s[j] > 'Z'){
                       if(s[j-1] == (s[j]-32)){
                           s.erase(j-1, 2);
                           b = true;
                           break;
                       }else if(s[j+1] == (s[j]-32)){
                           s.erase(j, 2);
                           b = true;
                           break;
                       }
                   }
               }
           } 
        } while(b);
        return s;
    }
};
int main(){
    Solution s;
    string st; 
    st = "leEeetcode";
    //st = "abBAcC";
    //st = "A";
    cout << s.makeGood("Pp") << endl;
    return 0;
}