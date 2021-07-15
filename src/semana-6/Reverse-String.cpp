#include <bits/stdc++.h>
using namespace std;
// https://leetcode.com/problems/reverse-string/
// 344. Reverse String
class Solution {
public:
    void reverseString(vector<char>& s) {
        int j;
        j = s.size() - 1;
        for (int i = 0; i < j; i++){
            swap(s[i], s[j]);
            j--;
        }
    }
};
int main(){
    
    return 0;
}