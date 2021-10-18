#include<bits/stdc++.h>
using namespace std;
void frsorar(int a[],int n)
{   int f=1,i=1;
    while(i<n)
    {
        while(i<n && a[i]==a[i-1])
        {
            f++;
             i++;
        }
        cout<<a[i-1]<<" "<<f<<endl;
        i++;
        f=1;
    }
    if(n==1 ||a[n-1]!=a[n-2])
    cout<<a[n-1]<<" "<<1;
}
int main()
{
    int s;
    cout<<"Enter size"<<endl;
    cin>>s;
    int arr[s];
    cout<<"Enter elements"<<endl;
    for(int i=0;i<s;i++)
    {
        cin>>arr[i];
    }
    frsorar(arr,s);
    return 0;
}
