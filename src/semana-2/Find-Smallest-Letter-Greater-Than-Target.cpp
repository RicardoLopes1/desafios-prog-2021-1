#include <bits/stdc++.h>
using namespace std;
//Problem: https://leetcode.com/problems/find-smallest-letter-greater-than-target/
// 744. Find Smallest Letter Greater Than Target

class Solution
{
public:
    char nextGreatestLetter(vector<char> &letters, char target)
    {
        if(target >= letters.at(letters.size()-1) or target < letters.at(0)) return letters.at(0);
        
        vector<char>::iterator it;
        // returns the index of the last element found + letters.begin()
        it = upper_bound(letters.begin(), letters.end(), target);
        return letters.at(it - letters.begin());
    }
};
int main()
{
    Solution s;
    vector<char> letters;
    letters.push_back('c');
    letters.push_back('f');
    letters.push_back('f');
    letters.push_back('f');
    letters.push_back('f');
    letters.push_back('j');
    char target = 'd';
    
    cout << s.nextGreatestLetter(letters, target) << endl;
    return 0;
}