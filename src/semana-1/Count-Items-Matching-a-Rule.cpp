#include <bits/stdc++.h>
using namespace std;
// https://leetcode.com/problems/count-items-matching-a-rule/

class Solution
{
public:
    int countMatches(vector<vector<string>> &items, string ruleKey, string ruleValue)
    {
        int rk, count = 0;
        if (ruleKey == "type")
            rk = 0;
        if (ruleKey == "color")
            rk = 1;
        if (ruleKey == "name")
            rk = 2;
        
        for (auto i : items)
        {
            if(i.at(rk) == ruleValue)
                count++;
        }
        return count;

    }
};

int main()
{
    vector<vector<string>> test;
    test.resize(2);
    test.at(0).push_back("olá mundo");
    test.at(0).push_back("mundo olá");
    cout << test.at(0).at(0) << endl;
    cout << test.at(0).at(1) << endl;
    return 0;
}