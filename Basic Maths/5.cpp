#include<bits/stdc++.h>
using namespace std;
void armstrong(int n){
    int num1=0,num2=n,digits=0;
    while(num2!=0){
        digits++;
        num2/=10;
    }
    num2=n;
    while(num2!=0){
        num1+=round(pow(num2%10,digits));
        num2/=10;
    }
    if(num1==n){
        cout<<"Armstrong Number";

    }
    else{
        cout<<"Not a armstrong Number";
    }
}
int main(){
    armstrong(371);
    return 0;
}