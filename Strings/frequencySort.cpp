#include <bits/stdc++.h>
using namespace std;

string frequencySort(string s)
{
    string ans;
    unordered_map<char, int> mp;
    for (int i = 0; i < s.size(); i++)
    {
        mp[s[i]] = 0;
    }
    for (int i = 0; i < s.size(); i++)
    {
        mp[s[i]] += 1;
    }
    while (ans.size() < s.size())
    {
        int max = 0;
        char maxs;
        for (auto i : mp)
        {
            if (i.second > max)
            {
                max = i.second;
                maxs = i.first;
            }
        }
        for (int i = 0; i < max; i++)
        {
            ans.push_back(maxs);
        }
        mp[maxs] = 0;
        max = 0;
    }
    return ans;
}

int main(){
    string s="tree";
    cout<<frequencySort(s);
    return 0;
}