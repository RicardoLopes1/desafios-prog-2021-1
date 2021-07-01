#include <bits/stdc++.h>
using namespace std;
// https://leetcode.com/problems/maximum-units-on-a-truck/
// 1710. Maximum Units on a Truck
class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        sort(boxTypes.begin(), boxTypes.end(),
        [](vector<int> a, vector<int> b) {
            return a[1] > b[1];
        });
        
        int acc, e, n;
        acc = 0;
        e = boxTypes.size();
    
        for(int i = 0; i < e; i++){
            n = boxTypes[i][0];
            for(int j = 0; j < n; j++){
                acc += boxTypes[i][1];
                truckSize--;
                if(truckSize == 0) break; 
            }
            if(truckSize == 0) break;
        }
           
        return acc;
    }
};
int main(){
    Solution s;
    vector<vector<int>> boxTypes;
    boxTypes.resize(1000);
    vector<int> vec;

    int truckSize = 10;
    cout << s.maximumUnits(boxTypes, truckSize) << endl;
    return 0;
}