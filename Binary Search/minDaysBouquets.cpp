#include <bits/stdc++.h>
using namespace std;

int minDays(vector<int> &bloomday, int m, int k)
{
    if (bloomday.size() < (long long)m * k)
        return -1;
    long long max = bloomday[0], min = bloomday[0];
    for (int i = 1; i < bloomday.size(); i++)
    {
        if (bloomday[i] > max)
            max = bloomday[i];
        if (bloomday[i] < min)
            min = bloomday[i];
    }
    long long low = min, high = max, result;
    while (low <= high)
    {
        long long mid = low + (high - low) / 2, cnt = 0, bq = 0;
        for (int i = 0; i < bloomday.size(); i++)
        {
            if (bloomday[i] <= mid)
            {
                cnt++;
                if (cnt == k)
                {
                    bq++;
                    cnt = 0;
                }
            }
            else
                cnt = 0;
        }
        if (bq >= m)
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
    vector<int> bloomday={7,7,7,7,12,7,7};
    int m=2;
    int k=3;
    cout<<minDays(bloomday,m,k);
    return 0;
}