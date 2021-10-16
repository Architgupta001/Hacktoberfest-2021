#include<bits/stdc++.h>
using namespace std;

void main()
{
    int i, n;
    float x, sum, t;
    
    cout<<" Enter the value for x : ";
    cin>>x;
    
    cout<<" Enter the value for n : ";
    cin>>n;
    
    x=x*3.14159/180;
    t=x;
    sum=x;
    
    /* Loop to calculate the value of Sine */
    for(i=1;i<=n;i++)
    {
        t=(t*(-1)*x*x)/(2*i*(2*i+1));
        sum=sum+t;
    }
    
    cout<<" The value of Sin("<<x<<") = "<<setprecision(4)<<sum;
}
