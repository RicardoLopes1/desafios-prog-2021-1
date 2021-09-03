#include <bits/stdc++.h>
using namespace std;
// https://leetcode.com/problems/n-repeated-element-in-size-2n-array/
// 961. N-Repeated Element in Size 2N Array
class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        map <int, int> freq;
        int nsize = nums.size();
        
        for(auto n : nums){
            freq[n]++;
        }
        
        for(auto & [k,v] : freq){
            if(v == nsize / 2)
                return k;
        }
        return 0;
    }
};
int main(){
    
    return 0;
}