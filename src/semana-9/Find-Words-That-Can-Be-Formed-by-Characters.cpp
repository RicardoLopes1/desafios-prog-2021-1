#include <bits/stdc++.h>
using namespace std;
// https://leetcode.com/problems/find-words-that-can-be-formed-by-characters/
// 1160. Find Words That Can Be Formed by Characters
class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        
        map <char, int> mchars;
        string s = "";
        bool b;
        
        for(auto c : chars){
            mchars[c]++;
        }
        
        for(auto word : words){
            map <char, int> mword;
            b = true;
            
            for(auto w : word){
                mword[w]++;
            }
            
            for(auto & [k, v] : mword){
                if(mchars[k] < v){
                    b = false;
                }
            }
            if(b) s += word;
        }
        return s.size();
    }
};
int main(){
    
    return 0;
}