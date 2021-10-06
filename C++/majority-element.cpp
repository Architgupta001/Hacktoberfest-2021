#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=7;
    int a[n]={ 1, 5,2, 3, 2,3, 3 };
    sort(a,a+n);
     
       if(n==1){
           cout<< a[0]<<"\n";
           return -1;
       }
       int count=1;
       for(int i=0;i<n-1;i++){
           if(a[i]==a[i+1]){
               count++;
               if(count>=(n/2)+1){
                   cout<< a[i]<<"\n";
                   return -1;
               }
           }
           else{
               count = 1;
           }
       }
       cout<< -1;
     }
