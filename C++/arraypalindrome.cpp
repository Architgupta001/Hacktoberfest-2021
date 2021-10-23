#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    char arr[n+1];
    cin>>arr;

    bool check=1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=arr[n-1-i])
        {
            check=0;
            break;
        }
    }

if(check==1)
{
    cout<<"char is palindrome";
}
else
{
    cout<<"not a palindrome";
}

}