#include<bits/stdc++.h>
using namespace std;
void highest_lowest(int arr[],int size){
    unordered_map<int,int> map;
    for(int i=0;i<size;i++){
        map[arr[i]]++;
    }
    int lowest=size;
    int highest=0;
    int a=0;
    int b=0;
    for(auto i:map){
        if(lowest>i.second){
            a=i.first;
            lowest=i.second;
        }
        if(highest<i.second){
            b=i.first;
            highest=i.second;
        }
    }
    cout<<b<<" "<<a;
}
int main(){
    int arr[]={2,2,3,4,4,2};
    int size=sizeof(arr)/sizeof(arr[0]);
    highest_lowest(arr,size);
    return 0;
}