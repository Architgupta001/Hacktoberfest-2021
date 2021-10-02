//Transpose of 2D array in c++.
#include<iostream>
using namespace std;

#include<stdio.h>
int main()
{
    int A[50][50],i,j,n,B[50][50];
    cout<<"\nEnter size of array\n";
    cin>>n;
    cout<<"\nEntere 2d array elements\n";
    for(i=0;i<n;i++)
       {
           for(j=0;j<n;j++)
              cin>>A[i][j];
       }
    cout<<"\nTranspose Matrix\n";
    for(i=0;i<n;i++)
       {
           for(j=0;j<n;j++)
              B[i][j]=A[j][i];
       }
    for(i=0;i<n;i++)
       {
           for(j=0;j<n;j++)
              cout<< B[i][j]<<"\t";

              cout<<endl;
       }
}