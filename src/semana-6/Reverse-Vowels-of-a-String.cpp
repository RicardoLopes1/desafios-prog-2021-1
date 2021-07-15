#include <bits/stdc++.h>
using namespace std;
// https://leetcode.com/problems/reverse-vowels-of-a-string/
// 345. Reverse Vowels of a String
class Solution {
public:
    string reverseVowels(string s) {
        int i, j; 
        bool flag;
        i = 0;
        j = s.size()-1;

        while(i< j){
            flag = true;
            
            if(tolower(s[i]) == 'a' || tolower(s[i]) == 'e' || tolower(s[i]) == 'i' || tolower(s[i]) == 'o' || tolower(s[i]) == 'u'){
                while(i < j && flag){
                    
                    
                        if(tolower(s[j]) == 'a' || tolower(s[j]) == 'e' || tolower(s[j]) == 'i' || tolower(s[j]) == 'o' || tolower(s[j]) == 'u'){
                            swap(s[i], s[j]);
                            i++;
                            flag = false;
                        }
                    j--;
                }
            }else{
                i++;
            }
        }//while
        return s;
    }
};
int main(){
    Solution sol;
    string s;
    s = "uleetcOdE nao , ; vai cairA";
    cout << s << endl;
    s = sol.reverseVowels(s);
    cout << s << endl;
    return 0;
}