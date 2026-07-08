#include <bits/stdc++.h>
using namespace std;
void move_zeros(int arr[], int size){
    int i = 0;
    for (int j = 0; j < size; j++){
        if (arr[j] != 0){
            if (i != j){
                swap(arr[i], arr[j]);
                i++;
            }
        }
    }
}
int main(){
    int arr[] = {0,0,0, 1, 5, 0, 8, 3, 0, 22, 0, 0, 21, 34};
    int size = sizeof(arr) / sizeof(arr[0]);
    move_zeros(arr, size);
    for (int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    return 0;
}