#include <bits/stdc++.h>
using namespace std;

bool isIsomorphic(string s, string t)
{
    if (s.size() != t.size())
        return false;
    unordered_map<char, char> mp1, mp2;
    for (int i = 0; i < s.size(); i++)
    {
        mp1[s[i]] = t[i];
        mp2[t[i]] = s[i];
    }
    if (mp1.size() != mp2.size())
        return false;
    for (int i = 0; i < s.size(); i++)
    {
        if (mp1[s[i]] != t[i])
            return false;
    }
    return true;
}

int main(){
    string s="egg";
    string t="add";
    if(isIsomorphic(s,t)) cout<<"True";
    else cout<<"False";
    return 0;
}