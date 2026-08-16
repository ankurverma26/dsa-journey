#include <bits/stdc++.h>
using namespace std;

bool isPerfectSquare(int num)
{
    if (num == 1)
        return true;
    long long low = 0, high = num;
    while (low <= high)
    {
        long long mid = low + (high - low) / 2;
        if (mid * mid == num)
            return true;
        if (mid * mid < num)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return false;
}

int main(){
    int num;
    cout<<"Enter a number : ";
    cin>>num;
    if(isPerfectSquare(num)) cout<<"True";
    else cout<<"False";
    return 0;
}