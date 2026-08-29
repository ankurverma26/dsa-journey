#include <bits/stdc++.h>
using namespace std;

int maxDepth(string s)
{
    int max = 0, cnt = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '(')
        {
            cnt++;
            if (cnt > max)
                max = cnt;
        }
        else if (s[i] == ')')
            cnt--;
    }
    return max;
}

int main(){
    string s="(1+(2*3)+((8)/4))+1";
    cout<<maxDepth(s);
    return 0;
}