#include<bits/stdc++.h>
using namespace std;
void prime(int n){
    if(n<=1){
        cout<<"Not a prime number";
        return;
    }
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            cout<<"Not a prime number";
            return;
        }
    }
    cout<<"Prime Number";
}
int main(){
    prime(4);
    return 0;
}