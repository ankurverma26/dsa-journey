#include <bits/stdc++.h>
using namespace std;

bool checkPerfectNumber(int num)
{
    int sum = 0;
    for (int i = 1; i <= sqrt(num); i++)
    {
        if (num % i == 0)
        {
            sum += i;

            if (i != num / i)
            {
                sum += num / i;
            }
        }
    }
    sum -= num;
    if (sum == num)
        return true;
    return false;
}

int main(){
    if(checkPerfectNumber(28)) cout<<"True";
    else cout<<"False";
    return 0;
}