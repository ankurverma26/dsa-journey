#include<bits/stdc++.h>
using namespace std;
int print(int n){
    cout<<n<<" ";
    if(n==2) return 1;
    else return print(n-1);
}
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    cout<<print(n);
    return 0;
}