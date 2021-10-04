#include<iostream>
using namespace std;
int factorial(int n){
    if(n==0){
        return 1;
    }
    else if(n==1){
        return 1;
    }
    else{
        return n*factorial(n-1);
    }
}
int iterfactorial(int n){
    int sum=1;
    for(int i=1;i<n;i++){
        sum=sum*(i+1);
        
    }return sum;
}   
int Fibonacci(int n){
    if(n==0||n==1){
        return 1;
    }
    else{
        return Fibonacci(n-1)+Fibonacci(n-2);
    }
}

main(){

    cout<<factorial(6)<<endl;
    cout<<iterfactorial(6)<<endl;
    for (int i = 0; i < 10; i++)
    {
        cout<<Fibonacci(i)<<endl;
    }
    
    
    return 0;
}
