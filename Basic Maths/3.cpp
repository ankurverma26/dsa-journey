#include<bits/stdc++.h>
using namespace std;
void palindrome(int n){
    int n1=n,rev=0;
    while(n1>0){
        rev=rev*10+n1%10;
        n1/=10;
    }
    if(rev==n){
        cout<<"Number is palindrome";
    }
    else{
        cout<<"Number is not palindrome";
    }
}
int main(){
    palindrome(7789);
    return 0;
}