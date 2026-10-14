#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int> &numbers, int target)
{
    int i = 0, j = numbers.size() - 1;
    while (i < j)
    {
        if (target == numbers[i] + numbers[j])
            return {i + 1, j + 1};
        else if (target < numbers[i] + numbers[j])
            j--;
        else
            i++;
    }
    return {};
}

int main(){
    vector<int> numbers={2,7,11,15};
    int target=9;
    vector<int>ans=twoSum(numbers,target);
    for(int it:ans) cout<<it<<" ";
    return 0;
}