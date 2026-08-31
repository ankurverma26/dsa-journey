#include <bits/stdc++.h>
using namespace std;

int strStr(string haystack, string needle)
{
    if (haystack.size() < needle.size())
        return -1;
    int j = 0, start = -1;
    for (int i = 0; i < haystack.size(); i++)
    {
        if (haystack[i] == needle[j])
        {
            if (j == 0 && ((haystack.size() - i) >= needle.size()))
                start = i;
            if (j == needle.size() - 1)
                return start;

            j++;
            continue;
        }
        if (start != -1)
            i = start;
        j = 0;
        start = -1;
    }
    return start;
}

int main(){
    string haystack="sadbutsad";
    string needle="sad";
    cout<<strStr(haystack,needle);
    return 0;
}