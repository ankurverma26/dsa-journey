#include <bits/stdc++.h>
using namespace std;

string capitalizeTitle(string title)
{
    int start = 0;

    for (int i = 0; i <= title.size(); i++)
    {
        if (i == title.size() || title[i] == ' ')
        {

            int len = i - start;

            for (int j = start; j < i; j++)
            {
                if (title[j] >= 'A' && title[j] <= 'Z')
                    title[j] += 32;
            }

            if (len >= 3)
            {
                if (title[start] >= 'a' && title[start] <= 'z')
                    title[start] -= 32;
            }

            start = i + 1;
        }
    }

    return title;
}

int main(){
    string s="capiTalIze tHe titLe";
    cout<<capitalizeTitle(s);
    return 0;
}
