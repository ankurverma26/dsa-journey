#include<iostream>
using namespace std;
int main(){
    int n=4;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        char a='A';
        for(int j=0;j<=i;j++){
            cout<<a++;
        }
        a='A';
        for(int j=i-1;j>=0;j--){
            cout<<char(a+j);
        }
        cout<<endl;
    }
    return 0;
}