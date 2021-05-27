#include <bits/stdc++.h>
using namespace std;
// https://leetcode.com/problems/guess-number-higher-or-lower/
// 374. Guess Number Higher or Lower

/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is lower than the guess number
 *			      1 if num is higher than the guess number
 *               otherwise return 0
 * int guess(int num);
 */
int pick = 25;
int guess(int num){
    if(num > pick) return -1;
    if(num < pick) return 1;
    return 0;
}
class Solution {
public:
    int guessNumber(long long int n) {
        long long int init = 1, end = n, mid = (n+1)/2;
        while(init <= end){
            if(guess(mid) == -1){
                end = mid - 1;
                mid = (init + end) / 2;
            }else if(guess(mid) == 1){
                init = mid + 1;
                mid = (init + end) / 2;
            }else{
                return mid;
            }
            
        }
        return 2;
    }
};
int main(){
    Solution s;
    cout << s.guessNumber(100) << endl;
    return 0;
}