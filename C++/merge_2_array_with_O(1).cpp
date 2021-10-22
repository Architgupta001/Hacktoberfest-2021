#include <bits/stdc++.h>
using namespace std; 
void swap(int& a, int& b)
{
    int temp = a;
    a = b;
    b = temp;
} 
void rotate(int a[], int n, int idx)
{
    int i;
    for (i = 0; i < idx / 2; i++)
        swap(a[i], a[idx - 1 - i]);
    for (i = idx; i < (n + idx) / 2; i++)
        swap(a[i], a[n - 1 - (i - idx)]);
    for (i = 0; i < n / 2; i++)
        swap(a[i], a[n - 1 - i]);
} 
void sol(int a1[], int a2[], int n, int m)
{
    int l = 0, h = n - 1, idx = 0;
    while (l <= h) {
        int c1 = (l + h) / 2;
        int c2 = n - c1 - 1;
        int l1 = a1[c1];
        int l2 = a2[c2 - 1];
        int r1 = c1 == n - 1 ? INT_MAX : a1[c1 + 1];
        int r2 = c2 == m ? INT_MAX : a2[c2];
        if (l1 > r2) {
            h = c1 - 1;
            if (h == -1)
                idx = 0;
        }
        else if (l2 > r1) {
            l = c1 + 1;
            if (l == n - 1)
                idx = n;
        }
        else {
            idx = c1 + 1;
            break;
        }
    }
 
    for (int i = idx; i < n; i++)
        swap(a1[i], a2[i - idx]); 
    sort(a1, a1 + n);
 
    sort(a2, a2 + m);
} 
void merge(int arr1[], int arr2[], int n, int m)
{
    if (n > m) {
        sol(arr2, arr1, m, n);
        rotate(arr1, n, n - m);
 
        for (int i = 0; i < m; i++)
            swap(arr2[i], arr1[i]);
    }
    else {
        sol(arr1, arr2, n, m);
    }
} 
int main()
{ 
    int ar1[] = { 1, 5, 9, 10, 15, 20 };
    int ar2[] = { 2, 3, 8, 13 };
    int m = sizeof(ar1) / sizeof(ar1[0]);
    int n = sizeof(ar2) / sizeof(ar2[0]);
    merge(ar1, ar2, m, n); 
    cout << "After Merging \nFirst Array: ";
    for (int i = 0; i < m; i++)
        cout << ar1[i] << " ";
    cout << "\nSecond Array: ";
    for (int i = 0; i < n; i++)
        cout << ar2[i] << " ";
    return 0;
}