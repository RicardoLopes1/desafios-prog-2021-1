#include <bits/stdc++.h>
using namespace std;
// https://leetcode.com/problems/unique-number-of-occurrences/
// 1207. Unique Number of Occurrences
class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map <int, int> freq;
        set <int> aux;
        
        for(auto a : arr){
            freq[a+1000]++;
        }
        
        for(auto & [k,v] : freq ){
            if(aux.count(v)){
                return false;
            }
            aux.insert(v);
        }
        return true;
    }
};
int main(){
    
    return 0;
}