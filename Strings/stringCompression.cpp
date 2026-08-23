#include <bits/stdc++.h>
using namespace std;

int compress(vector<char> &chars)
{
    int count = 1, start = 0, end = 0;
    for (int i = 0; i < chars.size() - 1; i++)
    {
        if (chars[i] == chars[i + 1])
        {
            count++;
        }
        else
        {
            end = i;
            if (count > 1)
            {
                start++;
                string s = to_string(count);
                for (char c : s)
                {
                    chars[start++] = c;
                }
                if (start <= end)
                {
                    chars.erase(chars.begin() + start,
                                chars.begin() + end + 1);
                    int removed = end - start + 1;
                    start = i + 1 - removed;
                    i -= removed;
                }
            }
            start = i + 1;
            count = 1;
        }
    }
    if (count > 1)
    {
        end = chars.size() - 1;
        start++;

        string s = to_string(count);

        for (char c : s)
        {
            chars[start++] = c;
        }

        if (start <= end)
        {
            chars.erase(chars.begin() + start,
                        chars.begin() + end + 1);
        }
    }
    return chars.size();
}

int main(){
    vector<char> chars={'a','b','b','b','b','b','b','b','b','b','b','b','b'};
    cout<<compress(chars);
    return 0;
}