#include <iostream>
using namespace std;

int get_min(int *arr, int size)
{
    int result = arr[0];
    for (int i = 0; i <= size; i++)
        result = min(result, arr[i]);
    return result;
}
int get_max(int *arr, int size)
{
    int result = arr[0];
    for (int i = 0; i <= size; i++)
        result = max(result, arr[i]);
    return result;
}

int main()
{
    int n;
    cin >> n;
    int *arr = new int(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Minimun " << get_min(arr, n) << "\n";
    cout << "Maximun " << get_max(arr, n) << "\n";

    delete (arr);

    return 0;
}
