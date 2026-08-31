#include <bits/stdc++.h>
using namespace std;

bool validPalindrome(string s)
{
    bool deleted = false;
    int low = 0, high = s.size() - 1, i1 = -1, i2 = -1;
    while (low < high)
    {
        if (s[low] != s[high])
        {
            deleted = true;
            i1 = low;
            i2 = high;
            break;
        }
        low++;
        high--;
    }
    if (!deleted)
        return true;
    low = 0;
    high = s.size() - 1;
    while (low < high)
    {
        if (low == i1)
            low++;
        if (high == i1)
            high--;
        if (s[low] != s[high])
        {
            deleted = false;
            break;
        }
        low++;
        high--;
    }
    if (deleted)
        return true;
    low = 0;
    high = s.size() - 1;
    while (low < high)
    {
        if (low == i2)
            low++;
        if (high == i2)
            high--;
        if (s[low] != s[high])
            return false;
        low++;
        high--;
    }
    return true;
}

int main(){
    string s="abca";
    if(validPalindrome(s)) cout<<"True";
    else cout<<"False";
    return 0;
}