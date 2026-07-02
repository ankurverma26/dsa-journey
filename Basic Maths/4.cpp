#include<bits/stdc++.h>
using namespace std;
int GCD(int a,int b){
    while(a>0 && b>0){
        if(a>b){
            a%=b;
        }
        else{
            b%=a;
        }
    }
    if(a==0){
        return b;
    }
    return a;
}
int main(){
    int n1,n2;
    cout<<"Enter n1 and n2 : "<<endl;
    cin>>n1>>n2;
    cout<<GCD(n1,n2);
    return 0;
}