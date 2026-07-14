#include<bits/stdc++.h>
using namespace std;

vector<int> rearrangeArray(vector<int>& nums) {
    vector<int>vec(nums.size(),0);
    int i=0,j=1,k=0;
    while(k<nums.size()){
        if(nums[k]>=0){
            vec[i]=nums[k];
            i+=2;
        }
        else{
            vec[j]=nums[k];
            j+=2;
        }
        k++;
    }
    return vec;
}

int main(){
    vector<int>vec={1,2,-4,-5};
    vector<int>ans=rearrangeArray(vec);
    for(auto i:ans){
        cout<<i<<" ";
    }
    return 0;
}