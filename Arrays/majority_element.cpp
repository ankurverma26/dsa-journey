#include<bits/stdc++.h>
using namespace std;

int majority_element(int arr[],int size){
    map<int,int> mp;
    for(int i=0;i<size;i++){
        mp[arr[i]]+=1;
    }
    for(auto i:mp){
        if(i.second>size/2) return i.first;
    }
}
int main(){
    int arr[]={7, 0, 0, 1, 7, 7, 2, 7, 7};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<majority_element(arr,size);
    return 0;
}