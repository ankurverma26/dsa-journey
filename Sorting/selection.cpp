#include<bits/stdc++.h>
using namespace std;
void selection_sort(int arr[],int size){    
    for(int i=0;i<size-1;i++){
        int min_index=i;
        for(int j=i;j<size;j++){
            if(arr[j]<arr[min_index]) min_index=j;
        }
        swap(arr[i],arr[min_index]);
    }
}
int main(){
    int arr[]={2,1,3,6,4,6};
    int size=sizeof(arr)/sizeof(arr[0]);
    selection_sort(arr,size);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}