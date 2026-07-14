#include<bits/stdc++.h>
using namespace std;

int profit(int arr[],int size){
    int maxprof=0,minprice=arr[0];
    for(int i=0;i<size;i++){
        if(arr[i]<minprice) minprice=arr[i];
        if(arr[i]-minprice>maxprof) maxprof=arr[i]-minprice;
    }
    return maxprof;
}
int main(){
    int arr[]={7,1,5,3,6,4};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<profit(arr,size);
    return 0;
}