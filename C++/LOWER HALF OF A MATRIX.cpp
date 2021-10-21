#include<iostream>
 
using namespace std;
 
int main()
{
int a[10][10],i,j,m;
cout<<"Enter size of the Matrix(min:3,max:5):";
cin>>m;
cout<<"\nEnter the Matrix row wise:\n";
for(i=0;i<m;i++)
for(j=0;j<m;++j)
cin>>a[i][j];
cout<<"\n\n";
for(i=0;i<m;++i)
{
for(j=0;j<m;++j)
{
if(i<j)
cout<<a[i][j]<<" ";
else
cout<<"  ";
}
cout<<"\n";
}
cout<<"\n\n";
for(i=0;i<m;++i)
{
for(j=0;j<m;++j)
{
if(j<i)
cout<<a[i][j]<<" ";
else
cout<<" ";
}
cout<<"\n";
}
 
return 0;
}
