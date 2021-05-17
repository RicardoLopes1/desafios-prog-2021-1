#include <bits/stdc++.h>
using namespace std;
// https://leetcode.com/problems/find-numbers-with-even-number-of-digits/

class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int n = 0, count = 0;
        for (int i : nums)
        {
            while ( i / 10 != 0)
            {
                i = i / 10;
                count++;
            }
            if (count % 2 == 1)
                n++;
            count = 0;

        }
        return n;
    }   
};

int main()
{
    // testando
    vector<int> nums;
    nums.push_back(12);
    nums.push_back(345);
    nums.push_back(2);
    nums.push_back(6);
    nums.push_back(7896);
    
    int n = 0, count = 0;
    for (int i : nums)
    {
        while ( i / 10 != 0)
        {
            i = i / 10;
            count++;
        }
        if (count % 2 == 1)
            n++;
        count = 0;
        
    }
    cout << n << endl;
    return 0;
}