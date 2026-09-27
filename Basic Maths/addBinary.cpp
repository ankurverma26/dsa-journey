#include <bits/stdc++.h>
using namespace std;

string addBinary(string a, string b)
{
    string ans;
    int carry = 0;
    int i = a.size() - 1;
    int j = b.size() - 1;
    while (i >= 0 && j >= 0)
    {
        int sum = carry + (a[i] - '0') + (b[j] - '0');
        ans.push_back((sum % 2) + '0');
        carry = sum / 2;

        i--;
        j--;
    }
    while (i >= 0)
    {
        int sum = carry + (a[i] - '0');
        ans.push_back((sum % 2) + '0');
        carry = sum / 2;

        i--;
    }
    while (j >= 0)
    {
        int sum = carry + (b[j] - '0');
        carry = 0;
        ans.push_back((sum % 2) + '0');
        carry = sum / 2;

        j--;
    }
    if (carry == 1)
        ans.push_back('1');
    reverse(ans.begin(), ans.end());
    return ans;
}

int main(){
    string a="1011";
    string b="1010";
    cout<<addBinary(a,b);
    return 0;
}
