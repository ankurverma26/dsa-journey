#include <bits/stdc++.h>
using namespace std;
int findDuplicate(vector<int> &nums)
{
    unordered_map<int, int> mp;
    for (int i : nums)
        mp[i]++;
    for (auto i : mp)
        if (i.second >= 2)
            return i.first;
    return -1;
}

int main(){
    vector<int> nums={1,3,4,2,2};
    cout<<findDuplicate(nums);
    return 0;

}