#include<bits/stdc++.h>
using namespace std;
void second_largest_smallest(int arr[],int size){
    int largest=arr[0],smallest=arr[0];
    for(int i=1;i<size;i++){
        if(largest<arr[i]) largest=arr[i];
        if(smallest>arr[i]) smallest=arr[i];
    }
    int second_larg=INT_MIN,second_small=INT_MAX;
    for(int i=0;i<size;i++){
        if(arr[i]>second_larg && arr[i]<largest) second_larg=arr[i];
        if(arr[i]<second_small && arr[i]>smallest) second_small=arr[i];
    }
    if(second_larg==INT_MIN) second_larg=-1;

    if(second_small==INT_MAX) second_small=-1;

    cout<<"Second largest : "<<second_larg<<" \nSecond smallest : "<<second_small<<endl;

    
}
int main(){
    int arr[]={1,3,6,4,14,78,2,77,78};
    int size=sizeof(arr)/sizeof(arr[0]);
    second_largest_smallest(arr,size);
    return 0;
}