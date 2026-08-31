#include <bits/stdc++.h>
using namespace std;

int lengthOfLastWord(string s)
{
    int ans = 0;
    for (int i = s.size() - 1; i >= 0; i--)
    {
        if (s[i] != ' ')
            ans++;
        if (s[i] == ' ' && ans != 0)
            return ans;
    }
    return ans;
}

int main(){
    string s="   fly me   to   the moon  ";
    cout<<lengthOfLastWord(s);
    return 0;
}