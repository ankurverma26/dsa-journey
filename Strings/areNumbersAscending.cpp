#include <bits/stdc++.h>
using namespace std;

bool areNumbersAscending(string s)
{
    int temp1 = INT_MAX;
    for (int i = s.size() - 1; i >= 0; i--)
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            if ((i >= 1) && s[i - 1] >= '0' && s[i - 1] <= '9')
            {
                if (s[i - 1] * 10 + s[i] < temp1)
                    temp1 = s[i - 1] * 10 + s[i];
                else
                    return false;
                i--;
            }
            else
            {
                if (s[i] < temp1)
                    temp1 = s[i];
                else
                    return false;
            }
        }
    }
    return true;
}

int main(){
    string s="1 box has 3 blue 4 red 6 green and 12 yellow marbles";
    if(areNumbersAscending(s)) cout<<"True";
    else cout<<"False";
    return 0;
}