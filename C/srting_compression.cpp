#include <bits/stdc++.h>
using namespace std;

void merge_arrays(int arr1[], int arr2[], int m, int n)
{
    int i = n - 1; //for arr1
    int j = 0;     //for arr2;
    while (i >= 0 && j < m)
    {
        if (arr1[i] > arr2[j])
        {
            swap(arr1[i], arr2[j]);
        }
        i--;
        j++;
    }
    sort(arr1, arr1 + n);
    sort(arr2, arr2 + m);
}

int main()
{
    int arr1[] = {1, 4, 6, 8, 9};
    int arr2[] = {10, 11, 16, 17, 21};
    int m = sizeof(arr1) / sizeof(arr1[0]);
    int n = sizeof(arr2) / sizeof(arr2[0]);
    merge_arrays(arr1, arr2, m, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr1[i] << " ";
    }
    for (int j = 0; j < m; j++)
    {
        cout << arr2[j] << " ";
    }

    return 0;
}
