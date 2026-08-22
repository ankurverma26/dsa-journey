#include <bits/stdc++.h>
using namespace std;

string mergeAlternately(string word1, string word2)
{
    string ans;
    int i = 0, j = 0;
    while (i < word1.size() && j < word2.size())
    {
        ans.push_back(word1[i]);
        ans.push_back(word2[j]);
        i++;
        j++;
    }
    while (j < word2.size())
    {
        ans.push_back(word2[j]);
        j++;
    }
    while (i < word1.size())
    {
        ans.push_back(word1[i]);
        i++;
    }
    return ans;
}

int main(){
    string word1="ab";
    string word2="pqrs";
    cout<<mergeAlternately(word1,word2);
    return 0;
}