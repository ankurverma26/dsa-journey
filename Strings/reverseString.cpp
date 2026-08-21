#include <bits/stdc++.h>
using namespace std;

void reverseString(vector<char> &s)
{
    int low = 0, high = s.size() - 1;
    while (low < high)
    {
        swap(s[low], s[high]);
        low++;
        high--;
    }
}

int main(){
    vector<char> s={'h','e','l','l','o'};
    reverseString(s);
    for(char i:s){
        cout<<i<<" ";
    }
    return 0;
}