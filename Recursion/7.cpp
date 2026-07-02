#include<bits/stdc++.h>
using namespace std;
// void palindrome_string(string str){
//     int size=str.size();
//     string str1=str;
//     int a=0;
//     int b=size-1;
//     while(a<b){
//         swap(str1[a],str1[b]);
//         a++;
//         b--;
//     }
//     if(str==str1) cout<<"Palindrome";
//     else cout<<"Not Palindrome";
// }
bool palindrome_string(string str,int i=0){
    if(i>=str.size()/2) return true;
    if (str[i]!= str[str.size()-i-1]) return false;
    return palindrome_string(str,i+1);
}
int main(){
    int a=palindrome_string("abba");
    if(a==1) cout<<"Palindrome";
    else cout<<"Not Palindrome";
    return 0;
}