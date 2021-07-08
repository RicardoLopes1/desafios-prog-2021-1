#include <bits/stdc++.h>
using namespace std;
// https://leetcode.com/problems/binary-watch/
// 401. Binary Watch
class Solution {
public:
    vector<string> readBinaryWatch(int turnedOn) {
        vector<string> v;
        if(turnedOn >= 9) return v;

        string s, ss;
        int m, h;
        m = turnedOn;
        h = 0;
        s = "";
        ss = "";
        while(m>0 and h<4){
            for(int i=0; i<12; i++){
                if(__builtin_popcount(i) == h){
                    ss = to_string(i)+":";

                    for(int j=0; j<60; j++){
                        if(__builtin_popcount(j) == m){
                            s = ss;
                            if(j < 10) s += "0";
                            s += to_string(j);
                            v.push_back(s);
                        }
                    }// for j
                }
            }// for i
            m--;
            h++;
        }
        for(int i=0; i<12; i++){
            if(__builtin_popcount(i) == h){
                s = to_string(i)+":00";
                v.push_back(s);
            }
        }
        return v;
    }
};
int main(){
    Solution s;
    vector<string> v; 
    int turnedOn = 7;
    v = s.readBinaryWatch(turnedOn);
    for(auto i: v){
        cout << i << " ";
    }
    cout << endl;

    return 0;
}