#include <bits/stdc++.h>
using namespace std;

int shipWithinDays(vector<int> &weights, int days)
{
    int total = weights[0], max = weights[0];
    for (int i = 1; i < weights.size(); i++)
    {
        if (weights[i] > max)
            max = weights[i];
        total += weights[i];
    }
    int result = total;
    int low = max, high = total;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        int day = 1, weight = 0;
        for (int i = 0; i < weights.size(); i++)
        {
            if (weight + weights[i] > mid)
            {
                day++;
                weight = weights[i];
            }
            else
                weight += weights[i];
        }
        if (day <= days)
        {
            result = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return result;
}

int main(){
    vector<int> weights={3,2,2,4,1,4};
    int days=3;
    cout<<shipWithinDays(weights,days);
    return 0;
}