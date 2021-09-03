#include <bits/stdc++.h>
using namespace std;
// https://leetcode.com/problems/intersection-of-two-arrays/
// 349. Intersection of Two Arrays
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        map <int, int> freqNums1;
        vector<int> res;
        
        for(auto n : nums1){
            freqNums1[n]++;
        }
        
        for(auto m : nums2){
            if(freqNums1[m] > 0){
                res.push_back(m);
                freqNums1[m] = 0;
            }
        }
        
        return res;
    }
};
int main(){
    
    return 0;
}