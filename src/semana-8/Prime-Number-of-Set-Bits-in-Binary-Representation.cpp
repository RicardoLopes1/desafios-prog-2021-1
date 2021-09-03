#include <bits/stdc++.h>
using namespace std;
// https://leetcode.com/problems/prime-number-of-set-bits-in-binary-representation/
// 762. Prime Number of Set Bits in Binary Representation
class Solution {
public:
    int countPrimeSetBits(int left, int right) {
        int acc = 0;

        while(left <= right) {
            if(is_prime( __builtin_popcount(left) ) )
                acc++;
            left++;
        }
        return acc;
    }

    bool is_prime(int x){
	    if(x <= 1) return false;

	    for (int i = 2; i <= x/i; i++){
		    if (x % i == 0)
			    return false;
	    }
	    return true;
    }
};
int main(){
    Solution s;
    int left, right;
    left = 10;
    right = 15;
    cout << s.countPrimeSetBits(left, right) << endl;
    return 0;
}