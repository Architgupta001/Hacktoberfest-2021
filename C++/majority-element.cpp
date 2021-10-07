// this code is contributed by acid000
#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int n=7;
    //array declaration
    int a[n]={ 1, 5,2, 3, 2,3, 3 };
    // sorting the array
    sort(a,a+n);
    // checking for edge cases that is array size=1 
       if(n==1){
           cout<< a[0]<<"\n";
           return -1;
       }
    // setting a counter variable
       int count=1;
    // traversing the list upto n-2 elements
       for(int i=0;i<n-1;i++){
           // if prev and next elements are same then increase the count
           if(a[i]==a[i+1]){
               count++;
               // if at any moment count is> n/2 print that answer and return
               if(count>=(n/2)+1){
                   cout<< a[i]<<"\n";
                   return -1;
               }
           }
           // set back the count of next element =1 and check for next of next element
           else{
               count = 1;
           }
       }
    // if there is no any majority element return -1
       cout<< -1;
     }
