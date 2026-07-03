#include<bits/stdc++.h>
using namespace std;
void bubble_sort(int arr[],int low,int high){
    if(high<=low) return;
    bool swapped=false;
    for(int i=low;i<high;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
            swapped=true;
        }
    }
    if(!swapped) return;
    bubble_sort(arr,low,high-1);
}
int main(){
    int arr[]={2,4,1,3,7,1,4};
    int size=sizeof(arr)/sizeof(arr[0]);
    int low=0,high=size-1;
    bubble_sort(arr,low,high);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}