#include <bits/stdc++.h>
using namespace std;
// https://leetcode.com/problems/car-pooling/
// 1094. Car Pooling
class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        int cap, start, end, n;
        bool res = true;
        
        vector<int> v;
        v.assign(1005, 0);
        n = 0;
        
        for(auto t : trips){
            cap = t[0];
            start = t[1];
            end = t[2];
            n = max(n, end);
            
            v[start] += cap;
            v[end] -= cap;
        }   
        
        for(int i=1; i<n; i++){
            v[i] += v[i-1];
            
            if(v[i] > capacity){
                res = false;
                break;
            } 
        }
        return res;  
    }
};
int main(){
    
    return 0;
}