#include <bits/stdc++.h>
using namespace std;
void bubble_sort(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        bool swapped = false;
        for (int j = 1; j < size - i; j++)
        {
            if (arr[j - 1] > arr[j])
            {
                swap(arr[j - 1], arr[j]);
                swapped=true;
            }
        }
        if(swapped==false) break;
    }
}
int main()
{
    int arr[] = {3, 6, 7, 2, 7, 1, 3, 59};
    int size = sizeof(arr) / sizeof(arr[0]);
    bubble_sort(arr, size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}