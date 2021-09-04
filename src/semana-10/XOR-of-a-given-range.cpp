#include <bits/stdc++.h>
using namespace std;
// https://practice.geeksforgeeks.org/problems/xor-of-a-given-range/1/
// XOR of a given range
class Solution{
    public:
    int getXor(vector<int>&nums, int a, int b){
        
        int res = 0;
        
        for(int i = a; i <= b; i++){
            res ^= nums[i];
        }
        
        return res;
    }
};
int main(){
    
    return 0;
}