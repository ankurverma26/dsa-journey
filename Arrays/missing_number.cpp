#include<bits/stdc++.h>
using namespace std;

int find_missing(int arr[],int n){
    int sum1=(n)*(n+1)/2;
    int sum2=0;
    for(int i=0;i<n-1;i++){
        sum2+=arr[i];
    }
    return sum1-sum2;
}
int main(){
    int arr[]={8, 2, 4, 5, 3, 7, 1};
    int n=8;
    cout<<find_missing(arr,n)<<endl;
    return 0;
}