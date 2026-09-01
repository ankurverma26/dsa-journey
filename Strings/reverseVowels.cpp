#include <bits/stdc++.h>
using namespace std;

string reverseVowels(string s)
{
    int low = 0, high = s.size() - 1;
    while (low < high)
    {
        if ((s[low] == 'a' || s[low] == 'e' || s[low] == 'i' ||
             s[low] == 'o' || s[low] == 'u' || s[low] == 'A' ||
             s[low] == 'E' || s[low] == 'I' || s[low] == 'O' ||
             s[low] == 'U') &&
            (s[high] == 'a' || s[high] == 'e' || s[high] == 'i' ||
             s[high] == 'o' || s[high] == 'u' || s[high] == 'A' ||
             s[high] == 'E' || s[high] == 'I' || s[high] == 'O' ||
             s[high] == 'U'))
        {
            swap(s[low], s[high]);
            low++;
            high--;
            continue;
        }
        else if (s[low] == 'a' || s[low] == 'e' || s[low] == 'i' ||
                 s[low] == 'o' || s[low] == 'u' || s[low] == 'A' ||
                 s[low] == 'E' || s[low] == 'I' || s[low] == 'O' ||
                 s[low] == 'U')
        {
            high--;
            continue;
        }
        else if (s[high] == 'a' || s[high] == 'e' || s[high] == 'i' ||
                 s[high] == 'o' || s[high] == 'u' || s[high] == 'A' ||
                 s[high] == 'E' || s[high] == 'I' || s[high] == 'O' ||
                 s[high] == 'U')
        {
            low++;
            continue;
        }
        low++;
        high--;
    }
    return s;
}

int main(){
    string s="IceCreAm";
    cout<<reverseVowels(s);
    return 0;
}