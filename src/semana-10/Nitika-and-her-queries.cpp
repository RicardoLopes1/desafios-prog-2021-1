#include <bits/stdc++.h>
using namespace std;
// https://practice.geeksforgeeks.org/problems/nitika-and-her-queries4804/1/
// Nitika and her queries
class Solution{
public:
    vector<int> specialXor(int N, int Q, int a[], vector<int> query[])
    {
        vector <int> res, prefixor;
        int l, r;
        prefixor.push_back(0);
        
        for(int e = 0; e < N; e++){
            prefixor.push_back(prefixor.back() ^ a[e]);
        }
        // XOR interval [a,b] when {a < b} =>
        // => prefixor[b] ^ prefixor[a-1]
        for(int i = 0; i < Q; i++){
            
            l = query[i][0];
            r = query[i][1];
            
            res.push_back((prefixor[r] ^ prefixor[l-1]) ^ prefixor.back());
        }
        
        return res;
    }
};
int main(){
    
    return 0;
}