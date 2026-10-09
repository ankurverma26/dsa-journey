#include <bits/stdc++.h>
using namespace std;

int minInsertions(string s)
{
    stack<char> st;
    int ans = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '(')
            st.push(s[i]);
        else
        {
            if (i + 1 < s.size() && s[i + 1] == ')')
                i++;
            else
                ans++;
            if (!st.empty())
                st.pop();
            else
                ans++;
        }
    }
    return ans + st.size() * 2;
}

int main(){
    string s="))())(";
    cout<<minInsertions(s);
    return 0;
}