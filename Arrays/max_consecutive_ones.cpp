#include<bits/stdc++.h>
using namespace std;

int max_ones(int arr[],int size){
    int summax=0,currentsum=0;
    for(int i=0;i<size;i++){
        if(arr[i]==1){
            currentsum+=1;
            if(currentsum>summax){
                summax=currentsum;
            }
        }
        else{
            currentsum=0;
        }
    }
    return summax;
}

int main(){
    int arr[]={1, 0, 1, 1, 0, 1};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<max_ones(arr,size);
    return 0;
}