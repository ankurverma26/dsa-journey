#include <bits/stdc++.h>
using namespace std;

string removeOuterParentheses(string s)
{
    if (s.size() <= 1)
        return "";
    string ans;
    int i = 0, j = 1, check = 0;
    while (j < s.size())
    {
        if (check == 0 && s[j] == ')')
        {
            s[i] = '\0';
            s[j] = '\0';
            i = j + 1;
            j = i + 1;
            continue;
        }
        else if (s[j] == '(')
        {
            check += 1;
        }
        else
        {
            check -= 1;
        }
        j++;
    }
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i])
            ans.push_back(s[i]);
    }
    return ans;
}

int main(){
    string s="(()())(())(()(()))";
    cout<<removeOuterParentheses(s);
    return 0;
}