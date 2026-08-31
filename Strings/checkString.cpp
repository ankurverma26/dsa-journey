#include <bits/stdc++.h>
using namespace std;

bool checkString(string s)
{
    bool a = true;
    for (int i = 0; i < s.size(); i++)
    {
        if (a && s[i] == 'b')
            a = false;
        if (!a && s[i] == 'a')
            return false;
    }
    return true;
}

int main(){
    string s="aaabbb";
    if(checkString(s)) cout<<"True";
    else cout<<"False";
    return 0;
}