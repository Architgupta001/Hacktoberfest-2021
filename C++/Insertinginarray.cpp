//Inserting element in 1d array at given position.
#include<iostream>
using namespace std;
#include<stdio.h>

#include<stdio.h>
int main()
{
    int A[50],i,n,l,p;
    cout<<"\nEnter size of array\n";
    cin>>n;
    cout<<"\nEntere 1d array elements\n";
    for(i=0;i<n;i++)
       {
            cin>>A[i];
       }
    cout<<"\nEnter element to enter\n";
    cin>>l;
    cout<<"\nEnter position to enter element in array\n";
    cin>>p;
    n++;
    for(i=n-1;i>=p;i--)
       {
           A[i]=A[i-1];
              
       }
       A[p-1]=l;
    for(i=0;i<n;i++)
       {
            cout<<A[i]<<"\t";
       }

}