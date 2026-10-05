#include <bits/stdc++.h>
using namespace std;

void check(string s, int left, int right, bool &ans)
{
    if (left >= right)
        return;
    if (s[right] != s[left])
    {
        ans = false;
        return;
    }
    check(s, left + 1, right - 1, ans);
}

bool isPalindrome(string s)
{
    bool ans = true;
    string temp;
    for (int i = 0; i < s.size(); i++)
    {
        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= '0' && s[i] <= '9'))
        {
            temp.push_back(s[i]);
        }
        else if (s[i] >= 'A' && s[i] <= 'Z')
        {
            temp.push_back(char(s[i] + 32));
        }
    }
    check(temp, 0, temp.size() - 1, ans);
    return ans;
}

int main(){
    string s="A man, a plan, a canal: Panama";
    if(isPalindrome(s)) cout<<"True";
    else cout<<"False";
    return 0;
}