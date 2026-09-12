#include <bits/stdc++.h>
using namespace std;

int addDigits(int num)
{
    while (num > 9)
    {
        int sum = 0;
        while (num != 0)
        {
            sum += num % 10;
            num /= 10;
        }
        num = sum;
    }
    return num;
}

int main(){
    cout<<addDigits(38);
    return 0;
}