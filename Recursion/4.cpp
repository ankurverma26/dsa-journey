#include<bits/stdc++.h>
using namespace std;
int sum_of_numbers(int n){
    if(n==1) return 1;
    else return n+sum_of_numbers(n-1);
}
int main(){
    cout<<sum_of_numbers(10);
    return 0;
}