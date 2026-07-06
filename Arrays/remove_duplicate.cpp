#include<bits/stdc++.h>
using namespace std;

//time complexity O(n), space O(n)
// int remove_duplicate(int arr[],int size){    
//     vector<int> temp;
//     temp.push_back(arr[0]);
//     for(int i=1;i<size;i++){
//         if(arr[i-1]!=arr[i]) temp.push_back(arr[i]);    
//     }
//     for(int i=0;i<temp.size();i++){
//         arr[i]=temp[i];
//     }
//     return temp.size();
// } 


//time complexity O(n), space O(1)
int remove_duplicate(int arr[],int size){
    if (size==0) return 0;
    int j=0;
    for(int i=1;i<size;i++){
        if(arr[i]!=arr[j]){
            j++;
            arr[j]=arr[i];
        }
    }
    return j+1;
}


int main(){
    int arr[]={1,1,2,3,4,5,5,5,6,6,7,7,9};
    int size=sizeof(arr)/sizeof(arr[0]);
    int new_size=remove_duplicate(arr,size);
    for(int i=0;i<new_size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl<<new_size;
    return 0;
}