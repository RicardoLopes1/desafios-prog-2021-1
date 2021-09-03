#include <bits/stdc++.h>
using namespace std;
// https://leetcode.com/problems/number-of-steps-to-reduce-a-number-to-zero/
// 1342. Number of Steps to Reduce a Number to Zero
class Solution {
public:
    int numberOfSteps(int num) {
        int cont = 0;
        
        while(num){
            if(num % 2){
                num--;
                cont++;
            }   
            else{
                num = num>>1;
                cont++;
            }
                
        }
        return cont;
    }
};
int main(){
    
    return 0;
}