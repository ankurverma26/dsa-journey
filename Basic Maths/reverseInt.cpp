#include <bits/stdc++.h>
using namespace std;

int reverse(int x)
{
    long long ans = 0;
    bool negative = false;
    if (x < 0)
    {
        negative = true;
        x = -(long long)x;
    }

    while (x != 0)
    {
        ans = ans * 10 + x % 10;
        x /= 10;
    }
    if (ans > INT_MAX || ans < INT_MIN)
        return 0;
    if (negative)
        return ans * -1;
    return ans;
}

int main(){
    int n=-123;
    cout<<reverse(n);
    return 0;
}