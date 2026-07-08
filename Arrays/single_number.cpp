#include<bits/stdc++.h>
using namespace std;

int singleNumber(int arr[],int size){
    int num=arr[0];
    for(int i=1;i<size;i++){
        num^=arr[i];
    }
    return num;
}
int main(){
    int arr[]={4, 1, 2, 1, 2};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<singleNumber(arr,size)<<endl;
    return 0;
}