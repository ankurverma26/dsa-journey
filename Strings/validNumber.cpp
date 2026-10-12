#include <bits/stdc++.h>
using namespace std;

bool isNumber(string s)
{
    bool exp = false;
    bool dot = false;
    bool sign = false;
    bool digit = false;
    bool digitAfterExp = true;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            digit = true;
            digitAfterExp = true;
        }
        else if (s[i] == '+' || s[i] == '-')
        {
            if (sign || (i > 0 && s[i - 1] != 'e' && s[i - 1] != 'E'))
                return false;
            sign = true;
        }
        else if (s[i] == '.')
        {
            if (dot || exp)
                return false;
            dot = true;
        }
        else if (s[i] == 'e' || s[i] == 'E')
        {
            if (exp || !digit)
                return false;
            exp = true;
            digitAfterExp = false;
            sign = false;
        }
        else
        {
            return false;
        }
    }

    return digit && digitAfterExp;
}

int main(){
    string s="e9";
    if(isNumber(s)) cout<<"True";
    else cout<<"False";
    return 0;
}