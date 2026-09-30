#include <bits/stdc++.h>
using namespace std;

bool isSubsequence(string s, string t)
{
    int len = 0;
    for (int i = 0; i < t.size(); i++)
    {
        if (s[len] == t[i])
            len++;
    }
    if (len == s.size())
        return true;
    return false;
}

int main(){
    string s="abc";
    string t="ahbgdc";
    if(isSubsequence(s,t)) cout<<"True";
    else cout<<"False";
    return 0;
}