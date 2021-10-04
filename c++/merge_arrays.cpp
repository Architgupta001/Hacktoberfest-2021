#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int pivot = 0;
    int j = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < pivot)
        {
            j++;
            swap(arr[j], arr[i]);
        }
    }
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}
