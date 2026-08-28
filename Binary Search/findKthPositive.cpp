#include <bits/stdc++.h>
using namespace std;

int findKthPositive(vector<int> &arr, int k)
{
    vector<int> missing;
    int total = arr.size() + k;
    int i = 1, j = 0;
    while (i <= total)
    {
        if (j < arr.size() && arr[j] == i)
            j++;
        else
            missing.push_back(i);
        i++;
    }
    return missing[k - 1];
}

int main(){
    vector<int> arr={2,3,4,7,11};
    int k=5;
    cout<<findKthPositive(arr,k);
    return 0;
}