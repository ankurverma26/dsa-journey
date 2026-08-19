#include <bits/stdc++.h>
using namespace std;

string reverseWords(string s)
{
    string ans;
    int i = s.size() - 1, j = i - 1;
    while (j >= 0 && i >= 0)
    {
        if (s[j] == ' ' && s[i] != ' ')
        {
            for (int k = j + 1; k <= i; k++)
            {
                ans.push_back(s[k]);
            }
            ans.push_back(' ');
            i = j;
        }
        else if (s[i] == ' ')
        {
            i--;
        }
        j--;
    }
    if (i >= 0)
    {
        for (int k = 0; k <= i; k++)
        {
            if (s[k] != ' ')
                ans.push_back(s[k]);
        }
    }
    if (ans.back() == ' ')
        ans.pop_back();
    return ans;
}

int main(){
    string s="a good   example";
    cout<<reverseWords(s);
    return 0;
}