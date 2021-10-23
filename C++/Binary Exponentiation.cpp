#include <bits/stdc++.h>
using namespace std;
 

int binpow(long long x, long long  y, long long  p)
{
    int res = 1;     
 
    x = x % p; 
  
    if (x == 0) return 0; 
 
    while (y > 0)
    {
       
        if (y & 1)
            res = (res*x) % p;
 
       
        y = y>>1; 
        x = (x*x) % p;
    }
    return res;
}
 

int main()
{
     long long  a,n,p;
     
     
      cin>>a>>n>>p;
      
       cout<<binpow(a,n,p);
   
    return 0;
}