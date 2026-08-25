#include <bits/stdc++.h>
using namespace std;

bool rotateString(string s, string goal)
{
    for (int i = 0; i < s.size(); i++)
    {
        if (s == goal)
            return true;
        char temp = s[0];
        for (int i = 0; i < s.size() - 1; i++)
        {
            s[i] = s[i + 1];
        }
        s[s.size() - 1] = temp;
    }
    return false;
}

int main(){
    string s="abcde";
    string goal="cdeab";
    if(rotateString(s,goal)) cout<<"True";
    else cout<<"False";
    return 0;
}