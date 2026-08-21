#include <bits/stdc++.h>
using namespace std;

string toLowerCase(string s)
{
    for (int i = 0; i < s.size(); i++)
    {
        if (int(s[i]) < 91 && int(s[i]) > 64)
        {
            s[i] += 32;
        }
    }
    return s;
}

int main(){
    string s="Hello";
    cout<<toLowerCase(s);
    return 0;
}