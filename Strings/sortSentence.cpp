#include <bits/stdc++.h>
using namespace std;

string sortSentence(string s)
{
    string ans;
    int search = 1, words = 1;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == ' ')
            words++;
    }
    for (int i = 0; i < words; i++)
    {
        int start = 0, end = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (i == 0 || s[i - 1] == ' ')
                start = i;
            if (s[i] == char(search + '0'))
            {
                end = i;
                break;
            }
        }
        for (int i = start; i < end; i++)
        {
            ans.push_back(s[i]);
        }
        ans.push_back(' ');
        search++;
    }
    ans.pop_back();
    return ans;
}

int main(){
    string s="is2 sentence4 This1 a3";
    cout<<sortSentence(s);
    return 0;
}