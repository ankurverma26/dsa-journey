#include<bits/stdc++.h>
using namespace std;
int largest_element(int arr[],int size){
    int largest=arr[0];
    for(int i=1;i<size;i++){
        if(arr[i]>largest) largest=arr[i];
    }
    return largest;
}
int main(){
    int arr[]={1,3,6,4,14,78,2};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<largest_element(arr,size);
    return 0;
}