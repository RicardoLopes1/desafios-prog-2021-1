#include <bits/stdc++.h>
using namespace std;
// https://leetcode.com/problems/check-if-all-the-integers-in-a-range-are-covered/
// 1893. Check if All the Integers in a Range Are Covered
// EXTRA
class Solution {
public:
    bool isCovered(vector<vector<int>>& ranges, int left, int right) {
        int interval[50 + 5];
        
        memset(interval, 0, sizeof(interval));
        
        for(auto rang: ranges){
            int l = rang[0];
            int r = rang[1];
            
            interval[l] += 1;
            interval[r+1] -= 1;
        }
        
        int acc = 0;
        for(int i=0; i<=right; i++){
            acc += interval[i];
            
            if(i>=left && acc==0){
                return false;
            }
        }
        return true;
    }
};
int main(){
    
    return 0;
}