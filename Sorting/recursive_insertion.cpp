#include <bits/stdc++.h>
using namespace std;
void insertion_sort(int arr[], int low, int high)
{
    if (low > high)
        return;

    int i = low - 1;
    while (i >= 0 && arr[i] > arr[i + 1])
    {

        swap(arr[i], arr[i + 1]);

        i--;
    }

    insertion_sort(arr, low + 1, high);
}
int main()
{
    int arr[] = {2, 1, 3, 6, 4, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    int low = 1;
    int high = size - 1;
    insertion_sort(arr, low, high);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}