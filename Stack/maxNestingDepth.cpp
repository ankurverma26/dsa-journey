#include <bits/stdc++.h>
using namespace std;

int maxDepth(string s)
{
    stack<char> st;
    int max = 0;
    for (char c : s)
    {
        if (c == '(')
        {
            st.push(c);
        }
        else if (c == ')' && !st.empty())
        {
            st.pop();
        }
        if (st.size() > max)
            max = st.size();
    }
    return max;
}

int main(){
    string s="(1+(2*3)+((8)/4))+1";
    cout<<maxDepth(s);
    return 0;
}