#include <bits/stdc++.h>
using namespace std;

int myAtoi(string s)
{
    long long ans = 0;
    bool sign = false;
    int sign1 = 1;
    int start = -1;
    for (int i = 0; i < s.size(); i++)
    {
        if (start == -1)
        {
            if (s[i] != ' ')
                start = i;
            if (s[i] == ' ')
                continue;
        }
        if ((s[i] == '-' || s[i] == '+') && sign == false && i == start)
        {
            sign = true;
            if (s[i] == '-')
                sign1 = -1;
            continue;
        }

        if (int(s[i]) >= 48 && int(s[i]) <= 57)
        {
            ans = ans * 10 + (int(s[i]) - 48);
            if (ans > INT_MAX && sign1 == 1)
                return INT_MAX;
            if (ans > INT_MAX && sign1 == -1)
                return INT_MIN;
        }
        else
            break;
    }
    return ans * sign1;
}

int main(){
    string s="1337c0d3";
    cout<<myAtoi(s);
    return 0;
}