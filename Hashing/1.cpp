#include<bits/stdc++.h>
using namespace std;
unordered_map<int,int> freq(int arr[],int size){
    unordered_map<int,int> mp;
    for(int i=0;i<size;i++){
        mp[arr[i]]++;
    }
    return mp;
}
int main(){
    int arr[]= {10,5,10,15,10,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    auto a=freq(arr,size);
    for(auto i:a){
        cout<<i.first<<" "<<i.second<<endl;
    }
    return 0;
}