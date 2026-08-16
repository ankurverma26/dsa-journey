#include <bits/stdc++.h>
using namespace std;

int mySqrt(int x)
{
    if (x <= 1)
        return x;
    long long low = 0, high = x, ans;
    while (low <= high)
    {
        long long mid = low + (high - low) / 2;
        if (mid <= x / mid)
        {
            ans = mid;
            low = mid + 1;
        }
        else
            high = mid - 1;
    }
    return ans;
}

int main(){
    int num;
    cout<<"Enter a number : ";
    cin>>num;
    cout<<mySqrt(num);
    return 0;
}