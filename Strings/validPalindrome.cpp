#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s)
{
    string ans;
    for (int i = 0; i < s.size(); i++)
    {
        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= '0' && s[i] <= '9'))
        {
            ans.push_back(s[i]);
        }
        else if (s[i] >= 'A' && s[i] <= 'Z')
        {
            ans.push_back(char(s[i] + 32));
        }
    }
    int low = 0, high = ans.size() - 1;
    while (low < high)
    {
        if (ans[low] != ans[high])
            return false;
        low++;
        high--;
    }
    return true;
}

int main(){
    string s="A man, a plan, a canal: Panama";
    if(isPalindrome(s)) cout<<"True";
    else cout<<"False";
    return 0;
}