#include <bits/stdc++.h>
using namespace std;

int minEatingSpeed(vector<int> &piles, int h)
{
    int max = piles[0];
    for (int i = 1; i < piles.size(); i++)
    {
        if (piles[i] > max)
            max = piles[i];
    }
    int low = 1, high = max;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        long long temp = 0;
        for (int i = 0; i < piles.size(); i++)
        {
            if (piles[i] % mid != 0)
            {
                temp += (piles[i] / mid) + 1;
            }
            else
            {
                temp += piles[i] / mid;
            }
        }
        if (temp <= h)
            high = mid - 1;
        else
            low = mid + 1;
    }
    return low;
}

int main(){
    vector<int>piles={3,6,7,11};
    int h=8;
    cout<<minEatingSpeed(piles,h);
    return 0;
}