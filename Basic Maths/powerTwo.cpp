#include <bits/stdc++.h>
using namespace std;

bool isPowerOfTwo(int n)
{
    if (n <= 0)
        return false;
    if ((n & (n - 1)) == 0)
        return true;
    return false;
}

int main(){
    int num=16;
    if(isPowerOfTwo(num)) cout<<"True";
    else cout<<"False";
    return 0;
}