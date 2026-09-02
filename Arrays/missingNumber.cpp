#include <bits/stdc++.h>
using namespace std;

int missingNumber(vector<int> &nums)
{
    int sum1 = nums.size() * (nums.size() + 1) / 2;
    int sum2 = 0;
    for (int i : nums)
        sum2 += i;
    return sum1 - sum2;
}

int main(){
    vector<int> nums={3,0,1};
    cout<<missingNumber(nums);
    return 0;
}