#include <bits/stdc++.h>
using namespace std;

bool isHappy(int n)
{
    unordered_set<int> st;
    while (st.find(n) == st.end() && n > 0)
    {
        st.insert(n);
        int sum = 0;
        while (n != 0)
        {
            sum += (n % 10) * (n % 10);
            n /= 10;
        }
        if (sum == 1)
            return true;
        n = sum;
    }
    return false;
}

int main(){
    int n=19;
    if(isHappy(n)) cout<<"True";
    else cout<<"False";
    return 0;
}