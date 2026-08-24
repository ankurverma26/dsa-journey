#include <bits/stdc++.h>
using namespace std;

string largestOddNumber(string num)
{
    int end = num.size() - 1;
    while (end >= 0)
    {
        if (int(num[end]) % 2 == 0)
        {
            num.pop_back();
            end--;
        }
        else
            break;
    }
    return num;
}

int main()
{
    string num="847900";
    cout<<largestOddNumber(num);
    return 0;
}