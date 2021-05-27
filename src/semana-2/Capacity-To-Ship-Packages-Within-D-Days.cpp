#include <bits/stdc++.h>
using namespace std;
// https://leetcode.com/problems/capacity-to-ship-packages-within-d-days/
// 1011. Capacity To Ship Packages Within D Days
class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int init, end, mid, auxDays, auxMid, acc, result;
        init = *max_element(weights.begin(), weights.end());
        end = accumulate(weights.begin(), weights.end(), 0);
        mid = (init+end)/2;
        result = 0;
        
        while(init <= end){
            auxDays = acc = 0;
            
            for(int i : weights){
                acc += i;
                if(acc > mid){
                    acc = i;
                    auxDays++;
                }else if(acc == mid){
                    acc = 0;
                    auxDays++;
                }
            }
            if(acc != 0) auxDays++;
            
            if(auxDays <= days){
                result = mid;
                end = mid - 1;
                mid = (init+end)/2;
            }else{
                init = mid + 1;
                mid = (init+end)/2;
            }
            
        }
        return result;
    }
};
int main(){
    vector<int> weights;
    weights.push_back(1);
    weights.push_back(2);
    weights.push_back(3);
    weights.push_back(4);
    weights.push_back(5);
    weights.push_back(6);
    weights.push_back(7);
    weights.push_back(8);
    weights.push_back(9);
    weights.push_back(10);
    int days = 5;
    Solution s;
    cout << s.shipWithinDays(weights, days) << endl;
    return 0;
}