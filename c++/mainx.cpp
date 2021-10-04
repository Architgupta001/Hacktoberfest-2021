#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k = 3;
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    cout << "Kth " << arr[k - 1] << endl;
}
