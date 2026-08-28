#include <bits/stdc++.h>
using namespace std;

bool isAnagram(string s, string t)
{
    if (s.size() != t.size())
        return false;
    unordered_map<char, int> mp1, mp2;
    int i = 97;
    while (i <= 122)
    {
        mp1[char(i)] = 0;
        mp2[char(i)] = 0;
        i++;
    }
    for (int j = 0; j < s.size(); j++)
    {
        mp1[s[j]] += 1;
        mp2[t[j]] += 1;
    }
    i = 97;
    while (i <= 122)
    {
        if (mp1[char(i)] != mp2[char(i)])
            return false;
        i++;
    }
    return true;
}

int main(){
    string s="anagram";
    string t="nagaram";
    if(isAnagram(s,t)) cout<<"True";
    else cout<<"False";
    return 0;
}