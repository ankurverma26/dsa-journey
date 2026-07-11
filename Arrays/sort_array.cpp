#include<bits/stdc++.h>
using namespace std;

void Sort(int arr[],int size){
    map<int,int> mp;
    for(int i=0;i<3;i++) mp[i]=0;
    for (int i=0;i<size;i++){
        mp[arr[i]]++;
    }
    for(int j=0;j<mp[0];j++) arr[j]=0;
    for(int j=mp[0];j<mp[1]+mp[0];j++) arr[j]=1;
    for(int j=mp[1]+mp[0];j<mp[0]+mp[1]+mp[2];j++) arr[j]=2;
}

int main(){
    int arr[]={1, 0, 2, 1, 0};
    int size=sizeof(arr)/sizeof(arr[0]);
    Sort(arr,size);
    for(int i=0;i<size;i++) cout<<arr[i]<<" ";
    return 0;
}